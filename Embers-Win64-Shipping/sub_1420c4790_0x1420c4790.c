// 函数: sub_1420c4790
// 地址: 0x1420c4790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg2
int64_t* rax = sub_141e5f980()

if (rax != 0 && rbx != 0)
    void* rax_1 = sub_140d41340()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rbx + 0x38) && *(*(rbx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* rax_4 = sub_140d41340()
            int64_t rax_5
            
            if (rax_4 != 0)
                rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_4 == 0 || rax_5.d s> *(rbx + 0x38)
                    || *(*(rbx + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rbx = nullptr
            
            (*(*rax + 0x2c0))(rax, arg1, rbx)
            return arg1

*arg1 = 0
arg1[1] = 0
return arg1
