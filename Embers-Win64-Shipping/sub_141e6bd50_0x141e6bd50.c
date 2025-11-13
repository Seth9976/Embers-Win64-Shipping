// 函数: sub_141e6bd50
// 地址: 0x141e6bd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg2
uint64_t result

if ((*(arg3 + 0xc) & 0xf) != 0)
    if (*(arg1 + 0x80) != *(arg1 + 0xac))
        int32_t rax_1 = sub_140cde1f0(rbx)
        void* r8 = arg1 + 0xb0
        void* rcx_2 = *(r8 + 8)
        
        if (rcx_2 != 0)
            r8 = rcx_2
        
        int32_t i = *(r8 + (((sx.q(*(arg1 + 0xc0)) - 1) & sx.q(rax_1)) << 2))
        
        if (i != 0xffffffff)
            int64_t rdx_3 = *(arg1 + 0x78)
            
            do
                int64_t rax_3 = sx.q(i) * 5
                void* rcx_4 = rdx_3 + (rax_3 << 3)
                
                if (*(rdx_3 + (rax_3 << 3)) == *rbx && *(rcx_4 + 8) == *(rbx + 8))
                    break
                
                i = *(rcx_4 + 0x20)
            while (i != 0xffffffff)
    
    result = sub_141e4c360(arg1 + 0x78, rbx, arg3)
else
    result = sub_141e68fa0(arg1 + 0x78, arg2)

*(arg1 + 0x2d8) = 0
return result
