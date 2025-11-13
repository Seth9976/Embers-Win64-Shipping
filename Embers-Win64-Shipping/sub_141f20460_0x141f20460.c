// 函数: sub_141f20460
// 地址: 0x141f20460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f435c0(arg1)
int64_t result = arg1[0x3f]

if (result == 0)
    if (arg1[0x3e] != 0)
        result = sub_142452380()
        
        if (result != 0)
            void* rdx_4 = arg1[0x3e]
            int64_t r8_3 = result + 0x30
            result = sx.q(*(result + 0x38))
            
            if (result.d s<= *(rdx_4 + 0x38))
                int64_t result_1 = result
                result = *(rdx_4 + 0x30)
                
                if (*(result + (result_1 << 3)) == r8_3 && rdx_4 != 0)
                    jump(*(*arg1 + 0x520))
    
    return result

int64_t rdi = *(result + 0x10)
void* const rdx_1

if (arg1[0x3e] == 0)
    rdx_1 = nullptr
else
    void* rax = sub_142452380()
    
    if (rax == 0)
        rdx_1 = nullptr
    else
        rdx_1 = arg1[0x3e]
        int64_t rax_1 = sx.q(*(rax + 0x38))
        
        if (rax_1.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_1 << 3)) != rax + 0x30)
            rdx_1 = nullptr

if (rdi == rdx_1)
    arg1[0x41] = *(arg1[0x3f] + 0x18)
else
    arg1[0x43].b |= 1
    arg1[0x41] = 0

char rcx_2 = arg1[0x43].b

if ((rcx_2 & 1) == 0)
    return sub_141ef6150(arg1, *(arg1[0x3f] + 0x5b) & 1) __tailcall

arg1[0x43].b = rcx_2 & 0xfe
sub_141f0f310(arg1)
jump(*(*arg1 + 0x520))
