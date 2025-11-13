// 函数: sub_140de7320
// 地址: 0x140de7320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2
void*** result_1 = j_sub_140a82f30(0x50)
int32_t rsi = 0
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    result[1] = 0
    *result = &data_142ec8878
    result[2] = data_143e244b0
    void* rax_1 = data_143e244b8
    result[3] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    result[4].d = 0
    *result = &data_142ec8fc8
    *(result + 0x24) = 0
    result[5] = 0
    result[6] = 0
    result[7].b = 1
    result[8] = 0
    result[9].d = 0

int64_t rdx = *arg1[0x55]

if (i != 0xffffffff)
    if (rdx(&arg1[0x55]) s> 0)
        int64_t* r14_1 = nullptr
        
        while (i s>= *(*(r14_1 + arg1[0x57]) + 0x20))
            rsi += 1
            r14_1 = &r14_1[1]
            
            if (rsi s>= (*arg1[0x55])(&arg1[0x55]))
                break
    
    if (arg1[0x59].b == 0)
        int32_t r13_1 = arg1[0x58].d
        arg1[0x58].d = r13_1 + 1
        
        if (r13_1 + 1 s> *(arg1 + 0x2c4))
            sub_140638870(&arg1[0x57])
        
        int64_t rbx_1 = sx.q(rsi)
        int64_t rdx_7 = arg1[0x57] + (rbx_1 << 3)
        memmove(rdx_7 + 8, rdx_7, (r13_1 - rsi) << 3)
        *(arg1[0x57] + (rbx_1 << 3)) = result
        int64_t rax_15 = arg1[0x56]
        
        if (rax_15 != 0 && result[1] != rax_15)
            result[1] = rax_15
            sub_140de7bf0(result)
else if (rdx(&arg1[0x55]) != 0)
    int64_t rdx_3 = sx.q((*arg1[0x55])(&arg1[0x55]) - 1)
    i = *(*(arg1[0x57] + (rdx_3 << 3)) + 0x20) + 1
    sub_140de6520(&arg1[0x55], result)
else
    i = 0
    sub_140de6520(&arg1[0x55], result)

sub_140e19ef0(arg1, 1)
result[4].d = i
return result
