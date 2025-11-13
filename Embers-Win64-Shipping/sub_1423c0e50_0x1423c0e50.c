// 函数: sub_1423c0e50
// 地址: 0x1423c0e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(*(arg1 + 0x48) + 0xd0)
int64_t rsi = sx.q(arg2) << 3
int32_t* r11 = *(rsi + *(r10 + 0x18))
void* result_1

if (arg4 != 0)
    uint32_t r9
    
    if (r10 == 0)
        r9 = 0
    else
        void* rax_3 = *(r10 + 0x28)
        
        if (rax_3 == 0)
            r9 = *(r10 + 0xc)
        else
            r9 = zx.d(*(rax_3 + 0x20))
    
    int64_t rcx_2 = sx.q(r9) * 5
    int32_t r8_1 = *((rcx_2 << 3) + 0x1439c85e8)
    uint32_t rax_8 = divu.dp.d(0:(*r11 - 1 + r8_1), r8_1)
    
    if (r9 - 0x1e u<= 1)
        uint32_t rcx_4 = 2
        
        if (rax_8 u>= 2)
            rcx_4 = rax_8
        
        rax_8 = rcx_4
    
    result_1 = arg1 + 0x68
    int64_t* result_2 = result_1
    int64_t* result_6 = *(result_1 + 0x70)
    
    if (result_6 != 0)
        result_2 = result_6
    
    sub_14199b030(result_2[sx.q(arg2)], arg3, r11[1], r9, rax_8 * (&data_1439c85f4)[rcx_2 * 2], 
        arg4)
else
    result_1 = arg1 + 0x68
    void* result_7 = *(result_1 + 0x70)
    uint32_t count = sub_140bc7f20(&r11[4])
    void* result_4 = result_1
    
    if (result_7 != 0)
        result_4 = result_7
    
    memcpy(arg3, *(result_4 + rsi), count)

int64_t* result_5 = *(result_1 + 0x70)
int64_t* result_3 = result_1

if (result_5 != 0)
    result_3 = result_5

sub_140a74f90(result_3[sx.q(arg2)])
void* result = *(result_1 + 0x70)

if (result != 0)
    result_1 = result

*(result_1 + rsi) = 0
return result
