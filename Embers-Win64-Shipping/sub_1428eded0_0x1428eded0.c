// 函数: sub_1428eded0
// 地址: 0x1428eded0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3 + 7)
int64_t rbp = sx.q((temp1 + (temp0 & 7)) s>> 3)
int32_t rbx_1 = arg3 & 0x80000007

if (rbx_1 s< 0)
    rbx_1 = ((rbx_1 - 1) | 0xfffffff8) + 1

int32_t* rax_4 = sub_1428db530(&data_143514eb0)

if (rax_4 != 0)
    *rax_4 = 0
    int32_t* rax_5 = *(rax_4 + 8)
    
    if (rax_5 != 0)
    label_1428edf55:
        
        if (sub_1428e61a0(rax_5, arg2, rbp.d) != 0)
            void* rax_7 = *(rax_4 + 8)
            *(rax_7 + 0x10) &= 0xfffffff8
            void* rax_8 = *(rax_4 + 8)
            *(rax_8 + 0x10) |= 8
            
            if (rbx_1 s> 0)
                int64_t rdx_3 = *(*(rax_4 + 8) + 8)
                *(rdx_3 + rbp - 1) &= not.b((0xff s>> rbx_1.b).b)
                void* rcx_3 = *(rax_4 + 8)
                *(rcx_3 + 0x10) |= 8 - rbx_1
            
            *arg1 = rax_4
            return 1
    else
        rax_5 = sub_1428c3490()
        *(rax_4 + 8) = rax_5
        
        if (rax_5 != 0)
            goto label_1428edf55
    
    sub_1428c3d60(rax_4, &data_143514eb0)

return 0
