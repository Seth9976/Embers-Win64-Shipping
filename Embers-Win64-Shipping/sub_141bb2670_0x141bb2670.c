// 函数: sub_141bb2670
// 地址: 0x141bb2670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x10)

if (rdi != 0)
    void* rax_1 = sub_141c1b420()
    void* rdx_1 = rdi[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t* rbx = rdi
        void* rax_5
        int64_t rax_6
        void* rdx_2
        
        do
            sub_140cd85e0(rbx)
            void* rax_4 = rbx[0x65]
            
            if (rax_4 != 0 && *(rax_4 + 0x28) != 0)
                return rbx
            
            rbx = rbx[8]
            
            if (rbx == 0)
                break
            
            rax_5 = sub_141c1b420()
            rdx_2 = rbx[2]
            rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(rdx_2 + 0x38))
                break
        while (*(*(rdx_2 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
        return rdi

return 0
