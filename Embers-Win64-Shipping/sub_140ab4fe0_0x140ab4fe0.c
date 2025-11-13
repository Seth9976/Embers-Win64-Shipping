// 函数: sub_140ab4fe0
// 地址: 0x140ab4fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
char* rsi = nullptr
int64_t* rcx = arg1[1]
void* rbx = arg2
int32_t var_d8 = 0
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &var_d8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_1, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    var_d8 = *rdx
    *rcx += 4

int32_t rcx_2 = var_d8
int64_t r14
r14.b = rcx_2 s< 0
uint64_t result

if (rcx_2 s>= 0)
label_140ab5071:
    int64_t rdx_2 = arg1[7]
    
    if (rdx_2 s<= 0 || sx.q(rcx_2) s<= rdx_2)
        int32_t rdx_3 = *(rbx + 0x108)
        result = zx.q(rdx_3 + rcx_2)
        *(rbx + 0x108) = result.d
        
        if (result.d s> *(rbx + 0x10c))
            sub_140ac0df0(rbx, rdx_3)
            rcx_2 = var_d8
        
        if (rcx_2 != 0)
            void* rax_4 = *(rbx + 0x100)
            
            if (r14.b == 0)
                char* var_48_1 = nullptr
                int32_t var_38_1 = rcx_2
                
                if (rax_4 != 0)
                    rbx = rax_4
                
                int32_t var_34_1 = rcx_2
                
                if (rcx_2 u> 0x80)
                    char* rax_7 = sub_140a84c80(0, sx.q(rcx_2), 0)
                    rcx_2 = var_d8
                    rsi = rax_7
                    var_48_1 = rax_7
                
                int64_t r9_1 = *arg1
                void var_c8
                char* rdx_6 = &var_c8
                
                if (rsi != 0)
                    rdx_6 = rsi
                
                (*(r9_1 + 0x150))(arg1, rdx_6, sx.q(rcx_2), r9_1)
                char* rdx_7 = &var_c8
                char* r8_4 = &var_c8
                
                if (var_48_1 != 0)
                    rdx_7 = var_48_1
                
                rdx_7[sx.q(var_d8 - 1)] = 0
                
                if (var_48_1 != 0)
                    r8_4 = var_48_1
                
                sub_1405a7220(rbx, var_38_1, r8_4, var_34_1, 0x3f)
                
                if (var_48_1 != 0)
                    sub_140a74f90(var_48_1)
            else
                if (rax_4 != 0)
                    rbx = rax_4
                
                (*(*arg1 + 0x150))(arg1, rbx, sx.q(rcx_2) * 2)
                *(rbx + (sx.q(var_d8 - 1) << 1)) = 0
        
        result.b = 1
    else
        *(arg1 + 0x29) |= 3
        result.b = 0
else
    rcx_2 = neg.d(rcx_2)
    var_d8 = rcx_2
    
    if (rcx_2 s>= 0)
        goto label_140ab5071
    
    *(arg1 + 0x29) |= 3
    result.b = 0

__security_check_cookie(rax_1 ^ &var_108)
return result
