// 函数: sub_14201d370
// 地址: 0x14201d370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x290))()
int16_t* var_38 = nullptr
int32_t var_30 = 0
sub_1405947f0(&var_38, 0xf)
int32_t rbx = var_30 + 0xf

if (rbx s> 0)
    sub_140594770(&var_38)

int16_t* rsi = var_38
UnDecorator::getReferenceType(rsi, u"SystemSettings", 0x1e)
void* rcx_3 = data_143ddb400
int32_t arg_8 = 0
int16_t* const rdx_1 = &data_142d40450

if (rbx != 0)
    rdx_1 = rsi

char rax_1
int32_t zmm0
rax_1, zmm0 = sub_140af3c10(rcx_3, rdx_1, u"r.Vsync", &arg_8, &data_143de5780)

if (rax_1 == 0)
    TEB* gsbase
    
    if (data_143f40758
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        int64_t r8_3
        r8_3, zmm0 = _Init_thread_header(&data_143f40758)
        
        if (data_143f40758 == 0xffffffff)
            int64_t* rcx_21 = data_143db18d0
            
            if (rcx_21 == 0)
                sub_140a53c40()
                rcx_21 = data_143db18d0
            
            r8_3.b = 1
            data_143f40750 = (*(*rcx_21 + 0xb0))(rcx_21, u"r.VSync", r8_3)
            zmm0 = _Init_thread_footer(&data_143f40758)
    
    int64_t* rcx_6 = data_143f40750
    wchar32 const* const rdx_2 = &(*U"RGBXYZF10|")[8]
    
    if (arg1[5].b != 0)
        rdx_2 = &(*U"RGBXYZF10|")[7]
    
    (*(*rcx_6 + 0x80))(rcx_6, rdx_2, 0x2000000)

if (rsi != 0)
    zmm0 = sub_140a74f90(rsi)

void* rcx_8 = data_143f5b298
*(rcx_8 + 0xa71) = *(arg1 + 0x29)
sub_1423f4d60(rcx_8)
(*(*arg1 + 0x300))(arg1)
int64_t* rcx_10 = data_143f5b298
(*(*rcx_10 + 0x2c0))(rcx_10, _mm_max_ss(zmm0, (zx.o(0)).d))
int64_t* rcx_11 = data_143f5b298

if ((*(*rcx_11 + 0x270))(rcx_11) != 0)
    sub_1422f2980(&arg1[6], 0)

void var_28
sub_1423ddaf0(data_143f5b298, &var_28)

if (sub_141e80b60(&var_28) != 0)
    void* rax_11
    char r8_1
    rax_11, r8_1 = sub_141e7e860()
    int64_t* rbx_1 = *(rax_11 + 8)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void* var_20
    sub_141e86f70(var_20, *(rax_11 + 0x18), r8_1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rbp_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rbp_1))

int64_t* rcx_18 = data_143db18d0

if (rcx_18 == 0)
    sub_140a53c40()
    rcx_18 = data_143db18d0

(*(*rcx_18 + 0x50))(rcx_18)
char rdx_6

if (sub_1419a4620() == 0 || *(arg1 + 0x104) == 0)
    rdx_6 = 0
else
    rdx_6 = 1

sub_142025180(arg1, rdx_6, arg1[0x21].d)
return sub_141e71cd0(&var_28)
