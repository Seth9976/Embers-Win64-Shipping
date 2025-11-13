// 函数: sub_140ac3050
// 地址: 0x140ac3050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(*arg2 + 8)

if ((rbx[5].b & 2) != 0)
    char arg_8 = 0xb
    int64_t* rdx = rbx[1]
    char* rcx = *rdx
    
    if (&rcx[1] u> rdx[1])
        (*(*rbx + 0x150))(rbx, &arg_8, 1)
    else
        arg_8 = *rcx
        int64_t* rax_3 = rbx[1]
        *rax_3 += 1

uint64_t result = zx.q(rbx[5].b)
uint64_t rcx_13

if ((result.b & 1) != 0)
    *(arg1 + 8) = 0
    void* rax_5 = *arg2
    int64_t arg_10 = 0
    uint64_t var_68 = 0
    int64_t var_60_1 = 0
    int64_t* rcx_2 = *(rax_5 + 8)
    (*(*rcx_2 + 0x140))(rcx_2, &arg_10)
    sub_140a1d9d0(*(*arg2 + 8), &var_68, arg3)
    void*** rax_7 = sub_140a941e0()
    void*** var_50_1 = rax_7
    void* var_58 = &rax_7[2]
    sub_1408ff2f0(&var_58, &rax_7[2])
    void* var_78 = &rax_7[2]
    void*** rcx_6 = rax_7
    void*** var_70 = rcx_6
    
    if (rax_7 != 0)
        rax_7[1].d += 1
        rcx_6 = var_70
    
    if (arg1 + 0x10 != &var_78)
        *(arg1 + 0x10) = &rax_7[2]
        var_78 = nullptr
        sub_1405aeff0(arg1 + 0x18, &var_70)
        rcx_6 = var_70
    
    int32_t rax_8
    
    if (rcx_6 != 0)
        rcx_6[1].d -= 1
        
        if (rcx_6[1].d == 1)
            void*** rbx_2 = var_70
            (**rbx_2)(rbx_2)
            rax_8 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_8 == 1)
                void*** rcx_9 = var_70
                (*rcx_9)[1](rcx_9, 1)
    
    if (rax_7 != 0)
        rax_7[1].d -= 1
        
        if (rax_7[1].d == 1)
            (**rax_7)(rax_7)
            rax_8 = *(rax_7 + 0xc)
            *(rax_7 + 0xc) -= 1
            
            if (rax_8 == 1)
                (*rax_7)[1](rax_7, 1)
    
    rax_8.b = data_143de5452 == 0
    result = sub_140ab38c0(*(arg1 + 0x10), arg1 + 8, arg_10, &var_68, rax_8.b)
    rcx_13 = var_68
label_140ac32c2:
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)
else if ((result.b & 2) != 0)
    void* rsi_2 = *(arg1 + 0x10)
    int64_t arg_18 = 0
    uint64_t var_88 = 0
    int64_t var_80_1 = 0
    
    if (rsi_2 != 0)
        EnterCriticalSection(rsi_2 + 0x48)
        arg_18 = *(rsi_2 + 0x18)
        
        if (&var_88 != rsi_2 + 0x20)
            int32_t rsi_3 = *(rsi_2 + 0x28)
            int64_t r15_2 = *(rsi_2 + 0x20)
            int32_t r8_2 = var_80_1:4.d
            var_80_1.d = rsi_3
            
            if (rsi_3 != 0 || r8_2 != 0)
                sub_1405a4c70(&var_88, rsi_3, r8_2)
                memcpy(var_88, r15_2, rsi_3 * 2)
            else
                var_80_1:4.d = r8_2
        
        if (rsi_2 != -0x48)
            LeaveCriticalSection(rsi_2 + 0x48)
    
    int64_t* rcx_18 = *(*arg2 + 8)
    (*(*rcx_18 + 0x140))(rcx_18, &arg_18)
    result = sub_140a1d9d0(*(*arg2 + 8), &var_88, arg3)
    rcx_13 = var_88
    goto label_140ac32c2
void* r15_3 = *(arg1 + 0x10)

if (r15_3 != 0)
    result = *arg2
    
    if ((*(*(result + 8) + 0x2a) & 0x20) != 0)
        EnterCriticalSection(r15_3 + 0x48)
        int64_t* rcx_23 = data_143db7a40
        uint64_t result_1 = *(r15_3 + 0x18)
        result = result_1
        
        if (rcx_23 != 0)
            (*(*rcx_23 + 0x28))(rcx_23, r15_3 + 0x18, arg2)
            result = *(r15_3 + 0x18)
        
        if (result != result_1)
            result = r15_3 + 0x38
            void var_48
            
            if (result != &var_48)
                *result = 0
                int64_t* rcx_24 = *(result + 8)
                *(result + 8) = 0
                
                if (rcx_24 != 0)
                    int32_t r14_1 = *(rcx_24 + 0xc)
                    *(rcx_24 + 0xc) -= 1
                    
                    if (r14_1 == 1)
                        result = (*(*rcx_24 + 8))(rcx_24, zx.q(r14_1))
        
        if (r15_3 != -0x48)
            return LeaveCriticalSection(r15_3 + 0x48)

return result
