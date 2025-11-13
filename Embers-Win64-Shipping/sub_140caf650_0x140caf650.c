// 函数: sub_140caf650
// 地址: 0x140caf650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[4].d
int32_t rdi_2 = rcx * arg2 + data_143e1d990
int32_t rax_1 = *(arg1 + 0x24) - 1

if (arg2 s>= rax_1)
    rcx = arg1[5].d - rax_1 * rcx

int32_t r12_1 = rdi_2 - 1 + rcx
uint64_t result = zx.q(data_143e1d9b4 - 1)

if (result.d s<= r12_1)
    r12_1 = result.d

int32_t r15 = 0

if (rdi_2 s<= r12_1)
    int64_t rbp
    int64_t arg_10 = rbp
    
    do
        uint32_t rdx = zx.d(rdi_2.w)
        int32_t rax_4 = rdi_2
        
        if (rdi_2 s< 0)
            rax_4 = rdi_2 + 0xffff
            rdx -= 0x10000
        
        int64_t rdx_1 = sx.q(rdx) * 3
        result = data_143e1d9a0
        int64_t rcx_3 = *(result + (sx.q(rax_4 s>> 0x10) << 3))
        void* r14_1 = *(rcx_3 + (rdx_1 << 3))
        void* rbx_1 = rcx_3 + (rdx_1 << 3)
        
        if (r14_1 != 0)
            r15 += 1
            int32_t rcx_5 = *(rbx_1 + 8) & 0xff7fffff
            *(rbx_1 + 8) = rcx_5
            result = zx.q(rcx_5 u>> 0x1e)
            
            if ((result.b & 1) != 0)
                if (((rcx_5 u>> 0x18).b & 1) != 0 || *(rbx_1 + 0xc) s> 0)
                    sub_140ccd120(arg1[2], rbx_1)
                
                result = sub_140ccd120(*arg1, r14_1)
            else if (*(rbx_1 + 0xc) s<= 0)
                rbp.b = 1
                result = zx.q(rcx_5 u>> 0x1d)
                
                if ((1 & result.b) != 0)
                    if (((rcx_5 u>> 0x18).b & 1) != 0)
                        result = sub_140ccd120(arg1[1], rbx_1)
                    
                label_140caf76a:
                    
                    if (rbp.b == 0)
                        goto label_140caf775
                    
                    *(rbx_1 + 8) |= 0x10000000
                else
                    if ((arg1[3].d & rcx_5) == 0)
                        result = zx.q(*(arg1 + 0x1c))
                        
                        if (result.d != 0 && (*(r14_1 + 8) & result.d) != 0)
                            rbp.b = 0
                        
                        goto label_140caf76a
                    
                label_140caf775:
                    result = sub_140ccd120(*arg1, r14_1)
                    
                    if ((*(rbx_1 + 0xb) & 1) != 0)
                        result = sub_140ccd120(arg1[2], rbx_1)
        
        rdi_2 += 1
    while (rdi_2 s<= r12_1)

data_143e1adf8 += r15
return result
