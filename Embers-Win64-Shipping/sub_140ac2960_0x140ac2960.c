// 函数: sub_140ac2960
// 地址: 0x140ac2960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool arg_8 = false
void* rsi = *(*arg2 + 8)
int512_t zmm1 = sub_140a9a920(arg2, arg1 + 0x10, arg3)
bool r8 = *(arg1 + 0x58)
arg_8 = r8
int64_t* r9 = *(*arg2 + 8)
int64_t* rcx_1 = r9[1]
int64_t rdx_1 = *rcx_1
bool rax_4

if (rdx_1 + 4 u> rcx_1[1])
    int32_t rax_5
    rax_5.b = r8 != 0
    int32_t arg_10 = rax_5
    (*(*r9 + 0x150))(r9, &arg_10, 4)
    rax_4 = arg_10 != 0
    arg_8 = rax_4
else
    arg_8 = *rdx_1 != 0
    int64_t* rax_3 = r9[1]
    *rax_3 += 4
    rax_4 = arg_8

if ((*(rsi + 0x28) & 1) == 0)
label_140ac2a3f:
    
    if (rax_4 != 0)
        zmm1 = sub_140a9a3d0(arg2, arg1 + 0x40)
else
    if (rax_4 != 0)
        int16_t var_48 = 0x100
        int128_t var_44
        __builtin_memcpy(&var_44, 
            "\x00\x00\x00\x00\x01\x00\x00\x00\x44\x01\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00", 
            0x14)
        
        if (&var_48 != arg1 + 0x40)
            zmm1.o = zx.o(var_44:0xc.q)
            *(arg1 + 0x40) = var_48.o
            *(arg1 + 0x50) = (zmm1.o).q
            *(arg1 + 0x58) = 1
        
        goto label_140ac2a3f
    
    if (*(arg1 + 0x58) != 0)
        *(arg1 + 0x58) = 0

int64_t* result = zx.q(*(rsi + 0x28))
uint64_t rcx_12

if ((result.b & 2) != 0)
    int64_t rcx_4 = *(arg1 + 0x60)
    uint64_t var_98
    uint64_t var_68
    uint64_t* rcx_7
    uint64_t rsi_1
    int32_t rdi_2
    
    if (rcx_4 == 0)
        int64_t var_60_1 = 0
        rcx_7 = &var_68
        rdi_2 = 2
        rsi_1 = 0
    else
        int64_t* rax_7 = sub_140903440(rcx_4)
        rsi_1 = 0
        var_98 = 0
        int32_t rdi_1 = rax_7[1].d
        int64_t r14_1 = *rax_7
        int32_t var_90_1 = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_98, rdi_1, 0)
            rsi_1 = var_98
            memcpy(rsi_1, r14_1, rdi_1 * 2)
        else
            int32_t var_8c_1 = 0
        
        rcx_7 = &var_98
        rdi_2 = 1
    
    *rcx_7 = 0
    int32_t var_70_1 = rcx_7[1].d
    int32_t var_6c_1 = *(rcx_7 + 0xc)
    rcx_7[1] = 0
    uint64_t var_78 = rsi_1
    
    if ((rdi_2.b & 2) != 0)
        uint64_t rcx_8 = var_68
        rdi_2 &= 0xfffffffd
        
        if (rcx_8 != 0)
            zmm1 = sub_140a74f90(rcx_8)
    
    if ((rdi_2.b & 1) != 0)
        uint64_t rcx_9 = var_98
        
        if (rcx_9 != 0)
            zmm1 = sub_140a74f90(rcx_9)
    
    result = sub_140a1d9d0(*(*arg2 + 8), &var_78, zmm1)
    rcx_12 = var_78
label_140ac2bca:
    
    if (rcx_12 != 0)
        return sub_140a74f90(rcx_12)
else if ((result.b & 1) != 0)
    void* rcx_13 = *arg2
    uint64_t var_88 = 0
    int32_t var_80_1 = 0
    result = sub_140a1d9d0(*(rcx_13 + 8), &var_88, zmm1)
    
    if (var_80_1 s> 1)
        void var_58
        result = sub_140a783a0(sub_140a752e0(), &var_58, &var_88)
        
        if (arg1 + 0x60 != result)
            *(arg1 + 0x60) = *result
            *result = 0
            result = sub_1405aeff0(arg1 + 0x68, &result[1])
        
        int64_t* var_50
        
        if (var_50 != 0)
            result = zx.q(var_50[1].d)
            var_50[1].d -= 1
            
            if (result.d == 1)
                result = (**var_50)(var_50)
                int32_t rdi_3 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (rdi_3 == 1)
                    result = (*(*var_50 + 8))(var_50, zx.q(rdi_3))
    
    rcx_12 = var_88
    goto label_140ac2bca
return result
