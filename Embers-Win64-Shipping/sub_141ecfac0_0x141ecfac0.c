// 函数: sub_141ecfac0
// 地址: 0x141ecfac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int64_t* rcx

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    rcx = *(arg1 + 0x20)
else
    rcx = nullptr

(*(*rcx + 0xda0))(rcx)
int64_t rcx_1 = 0
uint8_t rax_4 = (*(arg1 + 8) u>> 4).b & 1

if (rax_4 == 0)
    rcx_1 = *(arg1 + 0x20)

int64_t* rcx_2 = nullptr
int64_t rdx_1
int32_t* r8
int512_t zmm1

if (*(rcx_1 + 0x250) == 0)
    if (rax_4 == 0)
        rcx_2 = *(arg1 + 0x20)
    
    rdx_1 = 0
    zmm1.o = 0x40000000
    int32_t var_44_1 = 1.d
    int32_t var_4c
    int32_t var_3c_1 = var_4c & 0xfffffffe
    int32_t var_40_1 = 0x40000000
    int32_t var_48 = 0
    
    if (rax_4 == 0)
        rdx_1 = *(arg1 + 0x20)
    
    r8 = &var_48
else
    if (rax_4 == 0)
        rcx_2 = *(arg1 + 0x20)
    
    void* rdx = nullptr
    zmm1.o = 0x40000000
    int32_t var_64_1 = 1.d
    int32_t var_6c
    int32_t var_5c_1 = var_6c & 0xfffffffe
    int32_t var_60_1 = 0x40000000
    int32_t var_68 = 0
    
    if (rax_4 == 0)
        rdx = *(arg1 + 0x20)
    
    rdx_1 = *(rdx + 0x250)
    r8 = &var_68

(*(*rcx_2 + 0xd10))(rcx_2, rdx_1, zmm1, r8)

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    rdi = *(arg1 + 0x20)

void arg_8
int64_t* rax_8 = sub_140b58260(&arg_8, u"Event", 1)
void var_38
int32_t result = sub_1425692d0(rdi, 
    sub_140ac6680(_vfprintf_p_l(&var_38, Viewing from own camera", CheatManager")), *rax_8, zx.o(0))
int64_t* var_30

if (var_30 != 0)
    result = var_30[1].d
    var_30[1].d -= 1
    
    if (result == 1)
        result = (**var_30)(var_30)
        int32_t rdi_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_30 + 8))(var_30, zx.q(rdi_1))

return result
