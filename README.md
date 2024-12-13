# Sistema Bankar (Banking System)

Ky është një program i thjeshtë bankar në C++ që lejon përdoruesin të bëjë depozita, tërheqje dhe të shohë bilancin e llogarisë. Programi është i dizajnuar për të ruajtur bilancin e llogarisë dhe për të kontrolluar opsionet për depozitimin dhe tërheqjen e parave.

## Funksionet:

1. **Depozitimi i parave**:
   - Përdoruesi mund të depozitojë një shumë deri në 2000 euro.
   - Shuma nuk mund të jetë negative.
   
2. **Tërheqja e parave**:
   - Përdoruesi mund të tërheqë deri në 1000 euro.
   - Shuma nuk mund të jetë më e madhe se bilanci i llogarisë.

3. **Shikimi i bilancit**:
   - Përdoruesi mund të shikojë bilancin aktual të llogarisë.

4. **Dalja nga sistemi**:
   - Programi përfundon kur përdoruesi zgjedh opsionin për daljen.

## Udhëzime për përdorim:

1. **Kërkesa për sistemin**:
   - Ky program mund të ekzekutohet në çdo sistem që ka C++ të instaluar (përfshirë Windows, macOS, dhe Linux).

2. **Përgatitja e mjedisit**:
   - Sigurohuni që të keni një kompjuter me C++ të instaluar.
   - Përdorni një kompiler C++ për të ndihmuar me kompilimin e kodit. (P.sh., `g++` ose `clang++`).

3. **Kompilimi dhe ekzekutimi i programit**:
   - Hapni terminalin në direktorinë ku ndodhet skedari i kodit `banking_system.cpp`.
   - Kompilon programin duke përdorur komandën:

     ```bash
     g++ banking_system.cpp -o banking_system
     ```

   - Pasi të jetë kompiluar, mund ta ekzekutoni programin me komandën:

     ```bash
     ./banking_system
     ```

4. **Përdorimi i programit**:
   - Pas nisjes, programi do të shfaqë një menu ku mund të zgjidhni një nga opsionet:
     - **1**: Depozitoni para.
     - **2**: Tërhiqni para.
     - **3**: Shihni bilancin aktual.
     - **4**: Dalje nga sistemi.
     
   - Programi do t'ju udhëzojë për çdo hap dhe do t'ju tregojë një mesazh nëse ka ndodhur ndonjë gabim (p.sh., shuma është negative ose tejkalon kufirin).

## Shembuj:

1. **Depozitimi i parave**:
   - Përdoruesi zgjidh opsionin 1 dhe depoziton 1580 euro.
   - Mesazhi: `Depozita u krye me sukses. Bilanci i ri është: 1580`

2. **Tërheqja e parave**:
   - Përdoruesi zgjidh opsionin 2 dhe tenton të tërheqë 1500 euro.
   - Mesazhi: `Gabim: Limiti i tërheqjes është 1000 euro!`

3. **Shikimi i bilancit**:
   - Përdoruesi zgjidh opsionin 3 dhe shikon bilancin: `Bilanci aktual i llogarisë është: 1580`

4. **Dalja nga programi**:
   - Përdoruesi zgjidh opsionin 4 dhe del nga programi.

## Teknologjia:

- **Gjuhë programimi**: C++
- **Kompiluesi**: g++ (për sistemet që mbështesin GCC)

## Licenca:

Ky program është në pronësi të zhvilluesit dhe është i lirë për përdorim. Megjithatë, ju lutemi që të respektoni kushtet dhe rregullat e përdorimit përkatëse.

---

**Kreatori i Programit**: [Dion464](https://github.com/Dion464)
