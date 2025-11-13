// 函数: sub_140ff7110
// 地址: 0x140ff7110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0

if (data_143f01c92 == 0)
label_140ff7140:
    
    if (sub_140a80f40() == 0)
    label_140ff7163:
        void*** rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_3 = &rcx_2[3]
        
        if (rax_3 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x20)
            rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_3 = &rcx_2[3]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_3
        *data_143f02ba0 = rcx_2
        data_143f02ba0 = &rcx_2[1]
        rcx_2[1] = 0
        *rcx_2 = &data_142efad88
    else
        sub_140fe76a0()
        sub_140fed2a0(&data_143e2c0c8)
else
    if (sub_140a80f10() == 0)
        if (data_143f01c92 != 0)
            goto label_140ff7163
        
        goto label_140ff7140
    
    sub_140fe76a0()
    sub_140fed2a0(&data_143e2c0c8)

uint64_t result = sub_140fe76a0()
int32_t i = 0

if (data_143e2c0e0.d s> 0)
    int64_t rsi_1 = 0
    
    do
        int32_t* r9_2 = data_143e2c0d8 + rsi_1
        result = zx.q(data_143e2c0d0 - *r9_2)
        
        if (result.d u>= 5)
            int32_t j = 0
            
            if (r9_2[4] s> 0)
                int64_t* r8_1 = nullptr
                
                do
                    void* rcx_6 = *(r8_1 + *(r9_2 + 8))
                    
                    if ((*(rcx_6 + 0x28) & 1) == 0)
                        int32_t rax_7 = 0
                        
                        if (0 == *(rcx_6 + 8))
                            *(rcx_6 + 8) = 0
                        else
                            rax_7 = *(rcx_6 + 8)
                        
                        if (rax_7 != 1 && *(rcx_6 + 0x2c) == 2)
                            *(rcx_6 + 0x28) |= 1
                    
                    j += 1
                    r8_1 = &r8_1[1]
                while (j s< r9_2[4])
            
            int64_t r15_1 = sx.q(i) * 0x18
            sub_14081c910(data_143e2c0d8 + 8 + r15_1)
            int32_t rax_9 = data_143e2c0e0.d
            int32_t r8_4 = rax_9 - i - 1
            
            if (r8_4 s>= 1)
                r8_4 = 1
            
            if (r8_4 != 0)
                int64_t r9_3 = data_143e2c0d8
                memcpy(r15_1 + r9_3, r9_3 + sx.q(rax_9 - r8_4) * 0x18, r8_4 * 0x18)
                rax_9 = data_143e2c0e0.d
            
            data_143e2c0e0.d = rax_9 - 1
            result = sub_1405fde90(&data_143e2c0d8)
            i -= 1
            rsi_1 -= 0x18
        
        i += 1
        rsi_1 += 0x18
    while (i s< data_143e2c0e0.d)

data_143e2c0d0 += 1

if (data_143e2b8b6 != 0)
    TEB* gsbase
    
    if (data_143e2c1a8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e2c1a8)
        
        if (data_143e2c1a8 == 0xffffffff)
            int64_t* rcx_17 = data_143db18d0
            
            if (rcx_17 == 0)
                sub_140a53c40()
                rcx_17 = data_143db18d0
            
            int64_t r8_8
            r8_8.b = 1
            int64_t* rax_18 = (*(*rcx_17 + 0xb0))(rcx_17, u"r.gpucrash.collectionenable", r8_8)
            
            if (rax_18 != 0)
                int64_t rdx_4 = *rax_18
                rbx = (*(rdx_4 + 0x58))(rax_18, rdx_4)
            
            data_143e2c1a0 = rbx
            _Init_thread_footer(&data_143e2c1a8)
    
    result = data_143e2c1a0
    
    if (result != 0)
        result.b = *(result + 4) != 0
    
    if (*(arg1 + 0x158) == 0)
        if (result.b != 0)
            return sub_140ffd5f0(arg1)
    else if (result.b == 0)
        return sub_140ffd7d0(arg1) __tailcall

return result
