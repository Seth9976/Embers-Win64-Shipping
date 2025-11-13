// 函数: sub_142832b04
// 地址: 0x142832b04
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t r14 = sx.q(arg3.d)
int128_t zmm6 = arg4
int64_t rbp = sx.q(arg2)
char const* const rdx_1

if (arg2 s< 0 || rbp.d s>= *(arg1 + 0x18))
    rdx_1 = "Channel out of range"
else
    if (r14.d u<= 0x3b)
        *(*(*(arg1 + 0x58) + (rbp << 3)) + (r14 << 2) + 0x1bc) = zmm6.d
        *(*(*(arg1 + 0x58) + (rbp << 3)) + r14 + 0x2ac) = 0
        
        if (*(arg1 + 8) s> 0)
            int64_t* rsi_1 = nullptr
            
            do
                void* rcx_2 = *(rsi_1 + *(arg1 + 0x68))
                
                if (zx.d(*(rcx_2 + 5)) == rbp.d)
                    zmm6 = sub_1428396b4(rcx_2, r14.d, zmm6.d, 0)
                
                i += 1
                rsi_1 = &rsi_1[1]
            while (i s< *(arg1 + 8))
        
        return 0
    
    rdx_1 = "Parameter number out of range"

sub_142833a04(2, rdx_1, arg3)
return 0xffffffff
