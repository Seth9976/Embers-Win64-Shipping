// 函数: sub_14291b9b0
// 地址: 0x14291b9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t arg_10 = 0
sub_1428d8e50(arg5)
int64_t* rax = sub_1428d8ba0(arg5)
int64_t* rax_1 = sub_1428d8ba0(arg5)
int64_t* rax_2 = sub_1428d8ba0(arg5)

if (rax_2 != 0 && sub_1428f5900(rax_2, arg3) != 0 && sub_1429198e0(rax_1, arg2 - 1, 0, 1) != 0
        && sub_14291a950(nullptr, rax, rax_1, rax_2, arg5) != 0
        && sub_1428d9010(rax_1, rax_1, rax) != 0)
    int32_t rax_7
    
    if (arg4 != 0)
        if (sub_1428f5900(rax, arg4) != 0)
            rax_7 = sub_1428d8f70(rax_1, rax_1, rax)
            goto label_14291bab9
    else
        rax_7 = sub_1428f4ee0(rax_1, zx.q((arg4 + 1).d))
    label_14291bab9:
        
        if (rax_7 != 0 && sub_1428f56a0(arg1, rax_1) != 0 && sub_1428f4ee0(arg1, 1) != 0)
            while (true)
                void* const rbx_1 = &data_143520be2
                
                while (true)
                    if (rbx_1 s>= "crypto\bn\bn_prime.c")
                        arg_10 = 1
                        goto label_14291bb62
                    
                    uint64_t rax_11 = sub_1428f51c0(arg1, zx.q(*rbx_1))
                    uint64_t rax_12 = sub_1428f51c0(rax_1, zx.q(*rbx_1))
                    
                    if (rax_11 == -1)
                        goto label_14291bb62
                    
                    if (rax_12 == -1)
                        goto label_14291bb62
                    
                    if (rax_11 != 0 && rax_12 != 0)
                        rbx_1 += 2
                        continue
                    
                    if (sub_1428d8f70(arg1, arg1, arg3) == 0)
                        goto label_14291bb62
                    
                    if (sub_1428d8f70(rax_1, rax_1, rax_2) != 0)
                        break
                    
                    goto label_14291bb62

label_14291bb62:
sub_1428d8a60(arg5)
return zx.q(arg_10)
