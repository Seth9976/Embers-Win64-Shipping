// 函数: sub_14078ea90
// 地址: 0x14078ea90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x50) + 3) & 0xfffffffc
void* rsi = arg2
int32_t rdx = *(arg2 + 0x28)
uint64_t result_1 = arg1

if (result.d s> rdx)
    *(arg2 + 0x28) = result.d
    
    if (result.d s> *(arg2 + 0x2c))
        result = sub_1405a4cf0(arg2 + 0x20)
else if (result.d s< rdx && result.d != rdx)
    *(arg2 + 0x28) = result.d
    result = sub_1405dac90(arg2 + 0x20)

int32_t i_1 = 0
int32_t i = 0
void* rdi
void* var_20 = rdi

if (*(result_1 + 0x50) s> 0)
    int64_t rsi_1 = 0
    
    do
        void* rax_3 = *(result_1 + 0x48)
        
        if ((rax_3.b & 1) != 0)
            rax_3 = (rax_3 s>> 1) + result_1 + 0x48
        
        rdi = rax_3 + (rsi_1 << 3)
        int32_t rcx_2
        rcx_2.b = *(rdi + 4) == 0
        
        if ((rcx_2.b & sub_140b5b8a0(*(rax_3 + (rsi_1 << 3)), 0)) != 0)
        labelid_1a:
            *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
        else
            int64_t rcx_3 = sx.q(arg3[1].d)
            int64_t r8 = 0
            
            if (rcx_3.d s<= 0)
            labelid_1a:
                *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
            else
                int64_t* rdx_1 = *arg3
                
                while (*rdx_1 != *rdi)
                    r8 += 1
                    rdx_1 = &rdx_1[5]
                    
                    if (r8 s>= rcx_3)
                        goto label_14078eb68_2
                
                void* rax_9 = *(arg1 + 0x58)
                
                if ((rax_9.b & 1) != 0)
                    rax_9 = (rax_9 s>> 1) + arg1 + 0x58
                
                uint32_t r9_1 = zx.d(*(rax_9 + rsi_1))
                int16_t rax_14
                
                if (r9_1 - 1 u> 8)
                labelid_1a:
                    *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
                else
                    switch (r9_1)
                        case 1
                            if (rdx_1[1] != data_14396f0a8)
                            labelid_1a:
                                *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
                            else
                                rax_14 = data_14396f0b0
                            label_14078ed0d:
                                
                                if (rdx_1[2].w != rax_14)
                                labelid_1a:
                                    *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
                                else
                                    int32_t* rdx_3 = arg3[2] + r8 * 0x48
                                    
                                    if (r9_1.b u> 9 || not(test_bit(0x242, r9_1)))
                                        *(*(arg2 + 0x20) + (rsi_1 << 2)) = *rdx_3
                                    else
                                        *(*(arg2 + 0x20) + (rsi_1 << 2)) = rdx_3[1]
                        case 2
                            if (rdx_1[1] == data_14396f088)
                                rax_14 = data_14396f090
                                goto label_14078ed0d
                            
                        labelid_1a:
                            *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
                        case 3
                            if (rdx_1[1] == data_14396f0b8)
                                rax_14 = data_14396f0c0
                                goto label_14078ed0d
                            
                        labelid_1a:
                            *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
                        case 4
                            if (rdx_1[1] == data_14396f0c8)
                                rax_14 = data_14396f0d0
                                goto label_14078ed0d
                            
                        labelid_1a:
                            *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
                        case 5
                            if (rdx_1[1] == data_14396f0d8)
                                rax_14 = data_14396f0e0
                                goto label_14078ed0d
                            
                        labelid_1a:
                            *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
                        case 6
                            if (rdx_1[1] == data_14396f098)
                                rax_14 = data_14396f0a0
                                goto label_14078ed0d
                            
                        labelid_1a:
                            *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
                        case 7
                            if (rdx_1[1] == data_14396f0e8)
                                rax_14 = data_14396f0f0
                                goto label_14078ed0d
                            
                        label_14078eb68:
                            *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
                        case 8
                            if (rdx_1[1] == data_14396f0f8)
                                rax_14 = data_14396f100
                                goto label_14078ed0d
                            
                        label_14078eb68_1:
                            *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
                        case 9
                            if (rdx_1[1] == data_14396f138)
                                rax_14 = data_14396f140
                                goto label_14078ed0d
                            
                        label_14078eb68_2:
                            *(*(arg2 + 0x20) + (rsi_1 << 2)) = 0xffffffff
        
        result = arg1
        i += 1
        rsi_1 += 1
    while (i s< *(result + 0x50))
    
    rsi = arg2
    result_1 = result

if (*(result_1 + 0x40) u> 0)
    *(rsi + 0x30) = 0xffffffff
    
    if (arg3[1].d s> 0)
        do
            int64_t i_2 = sx.q(i_1)
            int64_t var_48
            int64_t* rax_8 = sub_140b63b70(*arg3 + i_2 * 0x28, &var_48)
            int16_t* const rcx_6
            
            if (rax_8[1].d == 0)
                rcx_6 = &data_142d40450
            else
                rcx_6 = *rax_8
            
            result = sub_140a54510(rcx_6, &data_142db68c4)
            int64_t rcx_14 = var_48
            rdi.b = result.d == 0
            
            if (rcx_14 != 0)
                result = sub_140a74f90(rcx_14)
            
            if (rdi.b != 0)
                result = arg3[2]
                *(rsi + 0x30) = *(result + i_2 * 0x48 + 4) + 1
                break
            
            i_1 += 1
        while (i_1 s< arg3[1].d)

int64_t rcx_16 = sx.q(*(result_1 + 0x50))

if (rcx_16.d s< *(rsi + 0x28))
    int64_t rdx_6 = rcx_16 << 2
    
    do
        result = *(arg2 + 0x20)
        rdx_6 += 4
        rcx_16 = zx.q(rcx_16.d + 1)
        *(rdx_6 + result - 4) = 0xffffffff
    while (rcx_16.d s< *(rsi + 0x28))

return result
