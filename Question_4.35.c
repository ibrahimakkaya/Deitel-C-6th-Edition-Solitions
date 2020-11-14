4.35 do/while döngüsünü, while döngüsüne dönüştürebilmek için gereken işlemleri anlatınız. Bir while döngüsünü,
do/while döngüsü ile değiştirmeye çalıştığımızda ne gibi bir problemle
142
karşılaşırız. Eğer size bir while döngüsünü, do/while ile değiştirmeniz söylenirse hangi kontrol yapısını eklemeye ihtiyaç duyarsınız ve 
bu test yapısını programın sonucunun değişmediğini anlayacak şekilde nasıl kullanırsınız?

- Do-while döngüsü, koşulun her zaman döngünün gövdesinden sonra yürütülmesi dışında while döngüsü ile hemen hemen aynıdır.
Bir while döngüsünde, gövde yalnızca belirli bir koşul karşılandığında çalıştırılır ve koşul yanlış olduğunda sona erer. 
Bu ilk denemede veya yirmi beşinci denemede olabilir. Diğer yandan do-while döngüsü, ilk deneme sırasında koşulun yanlış olup olmadığına bakılmaksızın,
gövdenin her zaman en az bir kez yürütülmesini garanti eder. While döngüsünün aksine, döngüyü durdurma koşulu döngüdeki ifadeler çalıştırılıncaya kadar test edilmez.

while (kosul)

{     statement 1;

      statement 2;

      .

      .

      statement(n);

  }
  
  
do {

       .

       statements // body of loop;

       } while (kosul);
