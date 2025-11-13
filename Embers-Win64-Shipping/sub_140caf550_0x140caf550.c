// 函数: sub_140caf550
// 地址: 0x140caf550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[4].d
int32_t i = rcx * arg2 + data_143e1d990
int32_t rax_1 = *(arg1 + 0x24) - 1

if (arg2 s>= rax_1)
    rcx = arg1[5].d - rax_1 * rcx

int32_t rbp_1 = i - 1 + rcx
uint64_t result = zx.q(data_143e1d9b4 - 1)

if (result.d s<= rbp_1)
    rbp_1 = result.d

int32_t rsi = 0

for (; i s<= rbp_1; i += 1)
    uint32_t rdx = zx.d(i.w)
    int32_t i_1 = i
    
    if (i s< 0)
        i_1 = i + 0xffff
        rdx -= 0x10000
    
    int64_t rdx_1 = sx.q(rdx) * 3
    result = data_143e1d9a0
    int64_t rcx_3 = *(result + (sx.q(i_1 s>> 0x10) << 3))
    void* r8_1 = rcx_3 + (rdx_1 << 3)
    void* rdx_2 = *(rcx_3 + (rdx_1 << 3))
    
    if (rdx_2 != 0)
        int32_t rcx_4 = *(r8_1 + 8)
        rsi += 1
        
        if (((rcx_4 u>> 0x1e).b & 1) == 0)
            result = zx.q(rcx_4 u>> 0x1d)
            
            if ((result.b & 1) != 0)
                *(r8_1 + 8) = rcx_4 | 0x10000000
            else
                if ((arg1[3].d & rcx_4) == 0)
                    result = zx.q(*(arg1 + 0x1c))
                
                if ((arg1[3].d & rcx_4) == 0 && (result.d == 0 || (*(rdx_2 + 8) & result.d) == 0))
                    *(r8_1 + 8) = rcx_4 | 0x10000000
                else
                    result = sub_140ccd120(*arg1, rdx_2)
        else
            result = sub_140ccd120(*arg1, rdx_2)

data_143e1adf8 += rsi
return result
