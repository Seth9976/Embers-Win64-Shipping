// 函数: sub_1428e6eb0
// 地址: 0x1428e6eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rdi_1

if (arg1 != 0)
    rdi_1 = *arg1

if (arg1 == 0 || rdi_1 == 0)
    int64_t* rax_1 = sub_1428abef0()
    rdi_1 = rax_1
    
    if (rax_1 == 0)
        return rax_1

if (arg2 == 0)
    sub_1428a5670(0xb, 0x73, 0x43, "crypto\x509\x509name.c", 0x136)
else
    sub_1428cd400(*rdi_1)
    int64_t* rax_2 = sub_1428f64c0(arg2)
    *rdi_1 = rax_2
    int32_t rcx_2
    rcx_2.b = rax_2 != 0
    
    if (rcx_2 != 0)
        uint64_t rbx_1 = zx.q(arg5)
        
        if (arg4 != 0 || rbx_1.d == 0)
            if (arg3 s<= 0 || not(test_bit(arg3, 0xc)))
                if (rbx_1.d s< 0)
                    rbx_1 = -1
                    
                    do
                        rbx_1 += 1
                    while (arg4[rbx_1] != 0)
                
                if (sub_1428f2d50(rdi_1[1], arg4, rbx_1.d) != 0)
                    if (arg3 != 0xffffffff)
                        if (arg3 != 0xfffffffe)
                            *(rdi_1[1] + 4) = arg3
                        else
                            *(rdi_1[1] + 4) = sub_14292b9e0(arg4, rbx_1.d)
                    
                    goto label_1428e6fcd
            else
                int32_t r15_1
                r15_1.b = sub_14292bdc0(&rdi_1[1], arg4, rbx_1.d, arg3, sub_1428a96d0(rax_2)) != 0
                
                if (r15_1 != 0)
                label_1428e6fcd:
                    
                    if (arg1 != 0 && *arg1 == 0)
                        *arg1 = rdi_1
                    
                    return rdi_1

if (arg1 == 0 || rdi_1 != *arg1)
    sub_1428abed0(rdi_1)

return nullptr
