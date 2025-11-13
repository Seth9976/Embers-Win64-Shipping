// 函数: sub_140ac2290
// 地址: 0x140ac2290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t rdi = 1
int64_t* r14 = *(*arg2 + 8)

if ((r14[5].b & 2) != 0)
    char arg_18 = 9
    int64_t* rcx = r14[1]
    char* rdx = *rcx
    
    if (&rdx[1] u> rcx[1])
        (*(*r14 + 0x150))(r14, &arg_18, 1)
    else
        arg_18 = *rdx
        int64_t* rax_3 = r14[1]
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
char arg_10 = *(arg1 + 0x1c)
int64_t* r9_2 = *(*arg2 + 8)
int64_t* rcx_6 = r9_2[1]
char* rdx_5 = *rcx_6

if (&rdx_5[1] u> rcx_6[1])
    (*(*r9_2 + 0x150))(r9_2, &arg_10, 1)
else
    arg_10 = *rdx_5
    int64_t* rax_21 = r9_2[1]
    *rax_21 += 1

*(arg1 + 0x1c) = sx.d(arg_10)
int512_t zmm1 = sub_140a1d9d0(*(*arg2 + 8), arg1 + 0x20, arg3)
uint64_t result = zx.q(r14[5].b)
uint64_t rcx_18

if ((result.b & 2) != 0)
    int64_t rcx_10 = *(arg1 + 0x30)
    uint64_t var_88
    uint64_t var_58
    uint64_t* rcx_11
    uint64_t rsi_1
    
    if (rcx_10 == 0)
        int64_t var_50_1 = 0
        rcx_11 = &var_58
        rdi = 2
        rsi_1 = 0
    else
        int64_t* rax_24 = sub_140903440(rcx_10)
        rsi_1 = 0
        var_88 = 0
        int32_t r14_1 = rax_24[1].d
        int64_t r15_1 = *rax_24
        int32_t var_80_1 = r14_1
        
        if (r14_1 != 0)
            sub_1405a4c70(&var_88, r14_1, 0)
            rsi_1 = var_88
            memcpy(rsi_1, r15_1, r14_1 * 2)
            rcx_11 = &var_88
        else
            rcx_11 = &var_88
            int32_t var_7c_1 = 0
    
    *rcx_11 = 0
    int32_t var_60_1 = rcx_11[1].d
    int32_t var_5c_1 = *(rcx_11 + 0xc)
    rcx_11[1] = 0
    uint64_t var_68 = rsi_1
    
    if ((rdi.b & 2) != 0)
        uint64_t rcx_14 = var_58
        rdi &= 0xfffffffd
        
        if (rcx_14 != 0)
            zmm1 = sub_140a74f90(rcx_14)
    
    if ((rdi.b & 1) != 0)
        uint64_t rcx_15 = var_88
        
        if (rcx_15 != 0)
            zmm1 = sub_140a74f90(rcx_15)
    
    result = sub_140a1d9d0(*(*arg2 + 8), &var_68, zmm1)
    rcx_18 = var_68
label_140ac2556:
    
    if (rcx_18 != 0)
        return sub_140a74f90(rcx_18)
else if ((1 & result.b) != 0)
    void* rcx_19 = *arg2
    uint64_t var_78 = 0
    int32_t var_70_1 = 0
    result = sub_140a1d9d0(*(rcx_19 + 8), &var_78, zmm1)
    
    if (var_70_1 s> 1)
        void var_48
        result = sub_140a783a0(sub_140a752e0(), &var_48, &var_78)
        
        if (arg1 + 0x30 != result)
            *(arg1 + 0x30) = *result
            *result = 0
            result = sub_1405aeff0(arg1 + 0x38, result + 8)
        
        int64_t* var_40
        
        if (var_40 != 0)
            result = zx.q(var_40[1].d)
            var_40[1].d -= 1
            
            if (result.d == 1)
                result = (**var_40)(var_40)
                int32_t rsi_3 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (rsi_3 == 1)
                    result = (*(*var_40 + 8))(var_40, 1)
    
    rcx_18 = var_78
    goto label_140ac2556
return result
