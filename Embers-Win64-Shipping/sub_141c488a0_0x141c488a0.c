// 函数: sub_141c488a0
// 地址: 0x141c488a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = data_143f34a18
sub_140b34200("RenderAudio", rbp)
memset(arg1[2], 0, sx.q(arg1[3].d) << 2)
int64_t* rcx_1 = arg1[1]

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, &arg1[2])

int32_t rcx_2 = arg1[6].d
float zmm1_1[0x4]

if (rcx_2 == 1)
    zmm1_1 = data_143a12bfc
    zmm1_1[0] = zmm1_1[0] - 1f
    
    if (not(__andps_xmmxud_memxud(zmm1_1, data_142d3f770)[0] <= 9.99999994e-09f))
        sub_141c3da90(&arg1[2], zmm1_1[0])
    
    sub_141c34e80(&arg1[2], 0xbf800000, 0x3f800000)
else if (rcx_2 == 2)
    zmm1_1 = data_143a12bfc
    zmm1_1[0] = zmm1_1[0] * 32767f
    void* r14_1 = arg1[4]
    int64_t rbx_1 = sx.q(arg1[3].d)
    sub_141c3da90(&arg1[2], zmm1_1[0])
    sub_141c34e80(&arg1[2], 0xc6fffe00, 0x46fffe00)
    int64_t i = 0
    
    if (rbx_1 s>= 4)
        void* r8_2 = r14_1 + 4
        
        do
            r8_2 += 8
            *(r8_2 - 0xc) = (int.d(fconvert.t(*(arg1[2] + (i << 2))))).w
            *(r8_2 - 0xa) = (int.d(fconvert.t(*(arg1[2] + (i << 2) + 4)))).w
            *(r8_2 - 8) = (int.d(fconvert.t(*(arg1[2] + (i << 2) + 8)))).w
            int16_t rcx_9 = (int.d(fconvert.t(*(arg1[2] + (i << 2) + 0xc)))).w
            i += 4
            *(r8_2 - 6) = rcx_9
        while (i s< rbx_1 - 3)
    
    for (; i s< rbx_1; i += 1)
        *(r14_1 + (i << 1)) = (int.d(fconvert.t(*(arg1[2] + (i << 2))))).w
*(arg1 + 0x34) = 1
int64_t* rcx_13 = *arg1
(*(*rcx_13 + 0x10))(rcx_13)
return sub_140b38680("RenderAudio", rbp) __tailcall
