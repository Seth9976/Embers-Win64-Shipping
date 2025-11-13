// 函数: sub_1428d9180
// 地址: 0x1428d9180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t i_3 = arg2[1].d
int64_t rbp = sx.q(arg3[1].d)
int32_t i_2 = i_3 - rbp.d

if (i_3 - rbp.d s>= 0)
    if (sub_142890e60(arg1, i_3) != 0)
        int64_t* r14_1 = *arg2
        int64_t* rbx_1 = *arg1
        int64_t rdx_2 = sub_142921500(rbx_1, r14_1, *arg3, rbp.d)
        void* r14_2 = &r14_1[rbp]
        void* rbx_2 = &rbx_1[rbp]
        
        if (i_2 != 0)
            int32_t i
            
            do
                int64_t rcx_3 = *r14_2
                r14_2 += 8
                *rbx_2 = rcx_3 - rdx_2
                rbx_2 += 8
                int64_t rax_5
                rax_5.b = rcx_3 == 0
                rdx_2 &= rax_5
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                bool cond:1_1 = *(rbx_2 - 8) != 0
                rbx_2 -= 8
                
                if (cond:1_1)
                    break
                
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        arg1[1].d = i_3
        arg1[2].d = 0
        return 1
else
    sub_1428a5670(3, 0x73, 0x64, "crypto\bn\bn_add.c", 0x8b)

return 0
