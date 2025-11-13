// 函数: sub_140a15920
// 地址: 0x140a15920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* lpLibFileName_8 = nullptr
int32_t var_20 = 0
sub_1405947f0(&lpLibFileName_8, 0xc)
int32_t rbx = var_20 + 0xc

if (rbx s> 0)
    sub_140594770(&lpLibFileName_8)

int16_t* lpLibFileName_4 = lpLibFileName_8
UnDecorator::getReferenceType(lpLibFileName_4, u"shlwapi.dll", 0x18)
int16_t* const lpLibFileName_3 = &data_142d40450
int16_t* const lpLibFileName = &data_142d40450

if (rbx != 0)
    lpLibFileName = lpLibFileName_4

int64_t rsi

if (LoadLibraryW(lpLibFileName) != 0)
    rsi.b = 1
else
    GetLastError()
    rsi.b = 0

if (lpLibFileName_4 != 0)
    sub_140a74f90(lpLibFileName_4)

lpLibFileName_8 = nullptr
int32_t var_20_1 = 0
sub_1405947f0(&lpLibFileName_8, 7)
int32_t rbx_1 = var_20_1 + 7

if (rbx_1 s> 0)
    sub_140594770(&lpLibFileName_8)

int16_t* lpLibFileName_5 = lpLibFileName_8
UnDecorator::getReferenceType(lpLibFileName_5, u"mf.dll", 0xe)
int16_t* const lpLibFileName_1 = &data_142d40450

if (rbx_1 != 0)
    lpLibFileName_1 = lpLibFileName_5

if (LoadLibraryW(lpLibFileName_1) != 0)
    rbx_1.b = 0
else
    GetLastError()
    rbx_1.b = 1

if (lpLibFileName_5 != 0)
    sub_140a74f90(lpLibFileName_5)

lpLibFileName_8 = nullptr
char result_2 = 0
int32_t var_20_2 = 0

if (rbx_1.b == 0)
    result_2 = rsi.b

sub_1405947f0(&lpLibFileName_8, 0xb)
int32_t rbx_2 = var_20_2 + 0xb

if (rbx_2 s> 0)
    sub_140594770(&lpLibFileName_8)

int16_t* lpLibFileName_6 = lpLibFileName_8
UnDecorator::getReferenceType(lpLibFileName_6, u"mfplat.dll", 0x16)
int16_t* lpLibFileName_2 = &data_142d40450

if (rbx_2 != 0)
    lpLibFileName_2 = lpLibFileName_6

if (LoadLibraryW(lpLibFileName_2) != 0)
    rbx_2.b = 0
else
    GetLastError()
    rbx_2.b = 1

if (lpLibFileName_6 != 0)
    sub_140a74f90(lpLibFileName_6)

lpLibFileName_8 = nullptr
char result = 0
int32_t var_20_3 = 0

if (rbx_2.b == 0)
    result = result_2

sub_1405947f0(&lpLibFileName_8, 0xb)
int32_t rbx_3 = var_20_3 + 0xb

if (rbx_3 s> 0)
    sub_140594770(&lpLibFileName_8)

int16_t* lpLibFileName_7 = lpLibFileName_8
UnDecorator::getReferenceType(lpLibFileName_7, u"mfplay.dll", 0x16)

if (rbx_3 != 0)
    lpLibFileName_3 = lpLibFileName_7

if (LoadLibraryW(lpLibFileName_3) != 0)
    rbx_3.b = 0
else
    GetLastError()
    rbx_3.b = 1

if (lpLibFileName_7 != 0)
    sub_140a74f90(lpLibFileName_7)

char result_1 = 0

if (rbx_3.b == 0)
    result_1 = result

if (result_1 == 0)
    return result

MFStartup(0x20070, 0)
void*** rax_7 = j_sub_140a82f30(0x98)
void*** rdi

if (rax_7 == 0)
    rdi = nullptr
else
    rdi = sub_140a15d10(rax_7)

void*** rax_9 = j_sub_140a82f30(0x18)
void*** rbx_4 = rax_9

if (rax_9 == 0)
    rbx_4 = nullptr
else
    rax_9[1].d = 1
    *(rax_9 + 0xc) = 1
    *rbx_4 = &data_142e4d6c8
    rbx_4[2] = rdi

void*** var_20_4 = rbx_4
data_143ceffe0 = rdi
int64_t* rdi_1 = data_143ceffe8
lpLibFileName_8 = nullptr

if (rbx_4 == rdi_1)
label_140a15c0f:
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp2_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rbx_4)[1](rbx_4, 1)
else
    void*** var_20_5 = nullptr
    data_143ceffe8 = rbx_4
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        rbx_4 = var_20_5
        goto label_140a15c0f

void* rax_14 = data_143ceffe8
lpLibFileName_8.o = data_143ceffe0.o

if (rax_14 != 0)
    *(rax_14 + 8) += 1

return sub_140a16840(&data_14399fbf8, &lpLibFileName_8)
