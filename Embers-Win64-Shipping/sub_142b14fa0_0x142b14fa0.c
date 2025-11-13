// 函数: sub_142b14fa0
// 地址: 0x142b14fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 1
int32_t i = arg3

if (arg4 == 0)
    rbp = arg4

do
    int32_t i_2 = i - 1
    int32_t i_1 = i_2
    char j = *(sx.q(i_2) + arg2)
    
    if (j s>= 0)
        if (rbp == 0)
            do
                if (*(zx.q(j) + arg1 + 8) != 0)
                    return zx.q(i_2 + 1)
                
                if (i_2 == 0)
                    return 0
                
                i_2 -= 1
                i_1 = i_2
                j = *(sx.q(i_2) + arg2)
            while (j s>= 0)
        else
            do
                if (*(zx.q(j) + arg1 + 8) == 0)
                    return zx.q(i_2 + 1)
                
                if (i_2 == 0)
                    return 0
                
                i_2 -= 1
                i_1 = i_2
                j = *(sx.q(i_2) + arg2)
            while (j s>= 0)
    
    uint64_t rax_6 = sub_142a9be90(arg2, 0, &i_1, zx.d(j), 0xfd)
    int32_t r9_1 = rax_6.d
    bool cond:1_1
    
    if (rax_6.d s<= 0x7ff)
        int32_t rax_8
        rax_8.b = test_bit(*(arg1 + ((zx.q(rax_6.d) & 0x3f) << 2) + 0x10c), zx.d((rax_6.d s>> 6).b))
        cond:1_1 = rax_8 != rbp
    else
        int64_t j_3
        int32_t j_4
        
        if (r9_1 s> 0xffff)
            j_3 = sx.q(*(arg1 + 0x34c))
            int64_t r10_4 = *(arg1 + 0x358)
            j_4 = *(arg1 + 0x350)
            
            if (r9_1 s< *(r10_4 + (j_3 << 2)))
                cond:1_1 = (sx.d(j_3.b) & 1) != rbp
            else
                if (j_3.d s< j_4 && r9_1 s< *(r10_4 + (sx.q(j_4 - 1) << 2)))
                    for (int32_t j_1 = (j_3.d + j_4) s>> 1; j_1 != j_3.d; j_1 = (j_3.d + j_4) s>> 1)
                        if (r9_1 s>= *(r10_4 + (sx.q(j_1) << 2)))
                            j_3 = zx.q(j_1)
                        else
                            j_4 = j_1
                
            label_142b1517d:
                cond:1_1 = (sx.d(j_4.b) & 1) != rbp
        else
            int32_t r10_2 = r9_1 s>> 0xc
            int32_t rdx_3 =
                *(arg1 + ((zx.q((rax_6 s>> 6).d) & 0x3f) << 2) + 0x20c) u>> r10_2.b & 0x10001
            
            if (rdx_3 u> 1)
                int64_t r10_3 = *(arg1 + 0x358)
                j_4 = *(arg1 + (sx.q(r10_2 + 1) << 2) + 0x30c)
                j_3 = sx.q(*(arg1 + (sx.q(r10_2) << 2) + 0x30c))
                
                if (r9_1 s>= *(r10_3 + (j_3 << 2)))
                    if (j_3.d s< j_4 && r9_1 s< *(r10_3 + (sx.q(j_4 - 1) << 2)))
                        for (int32_t j_2 = (j_3.d + j_4) s>> 1; j_2 != j_3.d; 
                                j_2 = (j_3.d + j_4) s>> 1)
                            if (r9_1 s>= *(r10_3 + (sx.q(j_2) << 2)))
                                j_3 = zx.q(j_2)
                            else
                                j_4 = j_2
                    
                    goto label_142b1517d
                
                cond:1_1 = (sx.d(j_3.b) & 1) != rbp
            else
                cond:1_1 = rdx_3 != rbp
    
    if (cond:1_1)
        return zx.q(i_2 + 1)
    
    i = i_1
while (i s> 0)

return 0
