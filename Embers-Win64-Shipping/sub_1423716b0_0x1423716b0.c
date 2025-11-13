// 函数: sub_1423716b0
// 地址: 0x1423716b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int64_t* rcx = arg1[0xa]
int32_t r8 = 4
int32_t rax = 4

if (*(arg1 + 0x7c) s>= 4)
    rax = *(arg1 + 0x7c)

*(arg1 + 0x7c) = rax

if (rcx == 0)
    r8 = 1
else
    int32_t i_2 = rcx[1].d
    
    if (i_2 s> 0)
        int64_t* rcx_1 = *rcx
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            void* rax_1 = *rcx_1
            
            if (*(rax_1 + 0xec) s> 0)
                int32_t rax_2 = *(rax_1 + 0xe8)
                
                if (rax_2 s<= r8)
                    r8 = rax_2
            
            rcx_1 = &rcx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)

int32_t rax_3 = arg1[0x10].d
int32_t r8_1 = r8 - 1
int64_t* rdi = nullptr

if (rax_3 s< 0)
    r8_1 = 0
else if (rax_3 s< r8_1)
    r8_1 = rax_3

arg1[0x10].d = r8_1
TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))

if (data_143cd80cc s> result.d)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    result = zx.q(arg1[1].d u>> 4)
    
    if ((result.b & 1) == 0)
        result = (*(*arg1 + 0x2f8))(arg1)

if (arg1[0x11] == 0)
    result = sub_14235dec0(arg1)

if ((*(arg1 + 0x94) & 4) == 0 || arg1[0x11] == 0)
    arg1[0x26] = 0
else
    uint64_t rcx_6 = arg1[0x26]
    
    if (rcx_6 != 0)
        arg1[0x11]
        jump(*(*rcx_6 + 0x260))
    
    if (data_143f38d78 != 0)
        rdi = data_143f38d70
    
    result = (*(*rdi + 0x48))(rdi, arg1)
    arg1[0x26] = result
    
    if (result != 0)
        arg1[0x11]
        jump(*(*result + 0x260))

return result
