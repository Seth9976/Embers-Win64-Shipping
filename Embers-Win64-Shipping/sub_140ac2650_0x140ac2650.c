// 函数: sub_140ac2650
// 地址: 0x140ac2650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t rdi = 1
int64_t* rsi = *(*arg2 + 8)

if ((rsi[5].b & 2) != 0)
    char arg_10 = 8
    int64_t* rcx = rsi[1]
    char* rdx = *rcx
    
    if (&rdx[1] u> rcx[1])
        (*(*rsi + 0x150))(rsi, &arg_10, 1)
    else
        arg_10 = *rdx
        int64_t* rax_3 = rsi[1]
        *rax_3 += 1

int64_t* r9 = *(*arg2 + 8)
int64_t* rcx_2 = r9[1]
int64_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    *(arg1 + 0x10) = *r8
    int64_t* rax_8 = r9[1]
    *rax_8 += 8
else if ((*(r9 + 0x29) & 0x20) != 0)
    sub_140b540d0(r9, arg1 + 0x10, arg3)
else
    (*(*r9 + 0x150))(r9, arg1 + 0x10, 8)

arg_8.b = *(arg1 + 0x18)
int64_t* r9_1 = *(*arg2 + 8)
int64_t* rcx_4 = r9_1[1]
char* rdx_3 = *rcx_4

if (&rdx_3[1] u> rcx_4[1])
    (*(*r9_1 + 0x150))(r9_1, &arg_8, 1)
else
    arg_8.b = *rdx_3
    int64_t* rax_14 = r9_1[1]
    *rax_14 += 1

*(arg1 + 0x18) = sx.d(arg_8.b)
int512_t zmm1 = sub_140a1d9d0(*(*arg2 + 8), arg1 + 0x20, arg3)
uint64_t result = zx.q(rsi[5].b)
uint64_t rcx_16

if ((result.b & 2) != 0)
    int64_t rcx_8 = *(arg1 + 0x30)
    uint64_t var_78
    uint64_t var_48
    uint64_t* rcx_9
    uint64_t rsi_1
    
    if (rcx_8 == 0)
        int64_t var_40_1 = 0
        rcx_9 = &var_48
        rdi = 2
        rsi_1 = 0
    else
        int64_t* rax_17 = sub_140903440(rcx_8)
        rsi_1 = 0
        var_78 = 0
        int32_t r14_1 = rax_17[1].d
        int64_t r15_1 = *rax_17
        int32_t var_70_1 = r14_1
        
        if (r14_1 != 0)
            sub_1405a4c70(&var_78, r14_1, 0)
            rsi_1 = var_78
            memcpy(rsi_1, r15_1, r14_1 * 2)
            rcx_9 = &var_78
        else
            rcx_9 = &var_78
            int32_t var_6c_1 = 0
    
    *rcx_9 = 0
    int32_t var_50_1 = rcx_9[1].d
    int32_t var_4c_1 = *(rcx_9 + 0xc)
    rcx_9[1] = 0
    uint64_t var_58 = rsi_1
    
    if ((rdi.b & 2) != 0)
        uint64_t rcx_12 = var_48
        rdi &= 0xfffffffd
        
        if (rcx_12 != 0)
            zmm1 = sub_140a74f90(rcx_12)
    
    if ((rdi.b & 1) != 0)
        uint64_t rcx_13 = var_78
        
        if (rcx_13 != 0)
            zmm1 = sub_140a74f90(rcx_13)
    
    result = sub_140a1d9d0(*(*arg2 + 8), &var_58, zmm1)
    rcx_16 = var_58
label_140ac28da:
    
    if (rcx_16 != 0)
        return sub_140a74f90(rcx_16)
else if ((1 & result.b) != 0)
    void* rcx_17 = *arg2
    uint64_t var_68 = 0
    int32_t var_60_1 = 0
    result = sub_140a1d9d0(*(rcx_17 + 8), &var_68, zmm1)
    
    if (var_60_1 s> 1)
        void var_38
        result = sub_140a783a0(sub_140a752e0(), &var_38, &var_68)
        
        if (arg1 + 0x30 != result)
            *(arg1 + 0x30) = *result
            *result = 0
            result = sub_1405aeff0(arg1 + 0x38, result + 8)
        
        int64_t* var_30
        
        if (var_30 != 0)
            result = zx.q(var_30[1].d)
            var_30[1].d -= 1
            
            if (result.d == 1)
                result = (**var_30)(var_30)
                int32_t rsi_2 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (rsi_2 == 1)
                    result = (*(*var_30 + 8))(var_30, 1)
    
    rcx_16 = var_68
    goto label_140ac28da
return result
