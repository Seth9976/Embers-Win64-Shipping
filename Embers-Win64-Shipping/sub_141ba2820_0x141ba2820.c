// 函数: sub_141ba2820
// 地址: 0x141ba2820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1
int64_t rax_2
void* rdx
void* r8

if (arg1 != 0)
    void* rax_1 = sub_141c122a0()
    rdx = r14[2]
    r8 = rax_1 + 0x30
    rax_2 = sx.q(*(rax_1 + 0x38))

if (arg1 == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != r8)
    void* r14_1 = r14[4]
    
    if (r14_1 != 0)
        r14 = *(r14_1 + 0x20)
        
        if (r14 != 0)
            void* rax_4 = sub_141c122a0()
            rdx = r14[2]
            r8 = rax_4 + 0x30
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_5 << 3)) == r8)
                goto label_141ba289a
else
label_141ba289a:
    
    if (r14[0x35] != 0)
        void* rax_8 = (*(*r14 + 0x290))(r14, rdx, r8)
        int64_t rdx_1 = *r14
        void* rax_9 = (*(rdx_1 + 0x150))(r14, rdx_1)
        return sub_141ba1140(r14[0x35], arg2, arg3, rax_9, rax_8)

return 0
