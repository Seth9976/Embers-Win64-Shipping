// 函数: sub_141973920
// 地址: 0x141973920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == arg1[0x6e])
    arg1[0x6e] = 0
    z = true
else
    arg1[0x6e]
    z = false

if (z)
    int32_t rdx_1 = *arg1
    
    if (rdx_1 == 0)
        rdx_1 ^= arg1[1]
    else if (rdx_1 == 1)
        int32_t rax_8 = sub_140b21160(&arg1[0x10], 0x14, 
            sub_140b21160(&arg1[0xb], 0x14, 
                sub_140b21160(&arg1[6], 0x14, 
                    sub_140b21160(&arg1[0x6c], 4, 
                        sub_140b21160(&arg1[0x68], 4, sub_140b21160(&arg1[0x67], 4, rdx_1))))))
        int32_t rax_14 = sub_140b21160(arg1 + 0x1ad, 1, 
            sub_140b21160(&arg1[0x6b], 1, 
                sub_140b21160(&arg1[0x6a], 4, 
                    sub_140b21160(&arg1[0x69], 4, 
                        sub_140b21160(&arg1[0x1a], 0x14, 
                            sub_140b21160(&arg1[0x15], 0x14, rax_8))))))
        int32_t rax_17 = sub_140b21160(&arg1[0x4f], 1, 
            sub_140b21160(arg1 + 0x1af, 1, sub_140b21160(arg1 + 0x1ae, 1, rax_14)))
        void* rbx_1 = arg1 + 0x105
        int64_t i_2 = 8
        int64_t i
        
        do
            int32_t rax_23 = sub_140b21160(rbx_1 + 3, 1, 
                sub_140b21160(rbx_1 + 2, 1, 
                    sub_140b21160(rbx_1 + 5, 1, 
                        sub_140b21160(rbx_1 + 1, 1, 
                            sub_140b21160(rbx_1, 1, sub_140b21160(rbx_1 - 1, 1, rax_17))))))
            rax_17 = sub_140b21160(rbx_1 + 4, 1, rax_23)
            rbx_1 += 7
            i = i_2
            i_2 -= 1
        while (i != 1)
        int32_t rax_27 = sub_140b21160(arg1 + 0x1b5, (i_2 + 1).d, 
            sub_140b21160(&arg1[0x6d], (i_2 + 1).d, 
                sub_140b21160(&arg1[0x5f], (i_2 + 0x20).d, 
                    sub_140b21160(&arg1[0x57], (i_2 + 0x20).d, rax_17))))
        void* i_1 = &arg1[0x1f]
        
        for (void* rsi_1 = i_1 + (sx.q(*(i_1 + 0x80)) << 3); i_1 != rsi_1; i_1 += 8)
            rax_27 = sub_140b21160(i_1, 8, rax_27)
        
        int32_t rax_33 = sub_140b21160(arg1 + 0x14b, 1, 
            sub_140b21160(arg1 + 0x14a, 1, 
                sub_140b21160(arg1 + 0x149, 1, 
                    sub_140b21160(&arg1[0x52], 1, 
                        sub_140b21160(&arg1[0x51], 4, sub_140b21160(&arg1[0x50], 4, rax_27))))))
        int32_t rax_39 = sub_140b21160(arg1 + 0x151, 1, 
            sub_140b21160(&arg1[0x54], 1, 
                sub_140b21160(arg1 + 0x14f, 1, 
                    sub_140b21160(arg1 + 0x14e, 1, 
                        sub_140b21160(arg1 + 0x14d, 1, sub_140b21160(&arg1[0x53], 1, rax_33))))))
        int32_t rax_45 = sub_140b21160(arg1 + 0x157, 1, 
            sub_140b21160(arg1 + 0x156, 1, 
                sub_140b21160(arg1 + 0x155, 1, 
                    sub_140b21160(&arg1[0x55], 1, 
                        sub_140b21160(arg1 + 0x153, 1, sub_140b21160(arg1 + 0x152, 1, rax_39))))))
        rdx_1 = sub_140b21160(arg1 + 0x159, 1, sub_140b21160(&arg1[0x56], 1, rax_45))
    
    if (0 == arg1[0x6e])
        arg1[0x6e] = rdx_1
    else
        arg1[0x6e]

if (0 != arg1[0x6e])
    return zx.q(arg1[0x6e])

arg1[0x6e] = 0
return 0
