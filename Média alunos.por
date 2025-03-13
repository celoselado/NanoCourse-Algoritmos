programa {
  
  funcao inicio() {
    
    real nota1, nota2, media
    caracter nomeAluno

      escreva("Ola! Bem vindo a calculadora de média da escola! Qual o nome do aluno?")
      leia(nomeAluno)
      escreva("Digite a Nota 1:")
      leia(nota1)
      escreva("Digite a Nota 2:")
      leia(nota2)

      media = (nota1 + nota2) / 2

      se(media >= 6){
        escreva("A média do aluno foi:"+media+" e o aluno esta aprovado!")
      } senao {
        escreva("A média do aluno foi:"+media+"e o aluno esta reprovado!")
      }
      


  }
}
