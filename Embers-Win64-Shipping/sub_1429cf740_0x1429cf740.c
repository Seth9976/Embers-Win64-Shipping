// 函数: sub_1429cf740
// 地址: 0x1429cf740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
void* rdi = **(arg1 + 0x28)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(sub_1429d3460(*arg1))
int32_t rbx = 0
void* rdx_1 = **(arg1 + 0x28)
int32_t result

if (((*(rdx_1 + 0x1d0) - *(rdx_1 + 0x1c8)) s>> 3).d s<= 0)
label_1429cf7da:
    result.b = 1
else
    while (true)
        if (sub_1429cc9c0(rdi, rbx) == 0)
            char var_418[0x400]
            sub_1429ced00(4, &var_418, 
                _snscanf(&var_418, 0x400, 
                    "Failure in TopologyRefinerFactory<>::Create() -- face-varying channel %d has no values.", 
                    zx.q(rbx)))
            result.b = 0
            break
        
        sub_1429cb2f0(rdi, rbx, (temp1 - temp0) s>> 1)
        rbx += 1
        void* rcx_7 = **(arg1 + 0x28)
        
        if (rbx s>= ((*(rcx_7 + 0x1d0) - *(rcx_7 + 0x1c8)) s>> 3).d)
            goto label_1429cf7da

__security_check_cookie(rax_1 ^ &var_438)
return result
