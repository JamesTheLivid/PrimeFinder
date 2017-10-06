	'(C) Copyright James Robinson 2017
  '
  'This is just the loop from VB to convert to c++
  
  
  Dim primeMax As Integer = Console.ReadLine()
		Dim i As Integer = 1
		Dim k As Integer = 2
		Dim primeCounter As Integer = 0

		'JamesCode.BlankLine(1)

		While i <= primeMax
			primeCounter = 0
			k = 2
			While k <= i / 2
				'Console.WriteLine(i Mod k & "i: " & i & "k: " & k)
				If (i Mod k) = 0 Then
					'file.Write(k & (" "))
					primeCounter = primeCounter + 1
					'Console.WriteLine("k: " & k)
				End If

				k = k + 1

			End While

			If primeCounter <= 0 Then
				'Console.Write(i)
				file.Write(i)
				file.WriteLine("")

　
			End If

			'		Console.WriteLine("Finished: " & i)
			If i Mod 10000 = 0 Then
				Console.WriteLine(String.Format("{0:#,#}", i))
			End If
			i = i + 1

		End While
