// 函数: sub_1423b02d0
// 地址: 0x1423b02d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1

if (arg1 != 0)
    void* rax_1 = sub_141c122a0()
    void* rdx = rdi[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        void* rax_6 = sub_14256a090()
        void* rdx_1 = rdi[2]
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        
        if (rax_7.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
            rdi = rdi[0x53]
        
        if (rax_7.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30
                || rdi != 0)
            void* rax_9 = sub_142531230()
            void* rdx_2 = rdi[2]
            int64_t rax_10 = sx.q(*(rax_9 + 0x38))
            
            if (rax_10.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                goto label_1423b036f
    else
        rdi = (*(*rdi + 0x290))(rdi, rdx)
    label_1423b036f:
        
        if (rdi != 0)
            return sub_1423b12c0(rdi, arg2) __tailcall

return 0
