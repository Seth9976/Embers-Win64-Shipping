// 函数: sub_141e7e8e0
// 地址: 0x141e7e8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_4 = 0
int64_t rbx = *(arg1 + 0x378)
uint64_t r12 = 0
int64_t r13 = sx.q(*(arg1 + 0x380))
uint64_t var_68 = 0
int32_t var_60 = r13.d

if (r13.d != 0)
    sub_1406387e0(&var_68, r13.d, 0)
    r12 = var_68
    arg4 = memcpy(r12, rbx, (r13 << 3).d)
    r13 = zx.q(var_60)

int128_t zmm8 = 0x3f000000

if (r13.d s> 0)
    uint64_t rdi_1 = r12
    int128_t zmm7 = 0x3f800000
    int128_t zmm6
    int128_t var_38_1 = zmm6
    i_4 = zx.q(r13.d)
    uint64_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            if (rbx_1[3] != 0)
                void* rax_1 = sub_140d3c6e0(&rbx_1[1])
                uint8_t rax_2
                
                if (rax_1 != 0)
                    rax_2 = sub_14242d230(rax_1)
                
                if (rax_1 == 0 || rax_2 != 0)
                    int64_t* rcx_5 = rbx_1[3]
                    
                    if (rcx_5 == 0)
                        if ((*(rbx_1 + 0x182) & 8) != 0)
                            goto label_141e7ea65
                        
                        goto label_141e7e9ec
                    
                    if (sub_14236bbe0(rcx_5, arg4.d) != 0 || (*(rbx_1 + 0x182) & 8) != 0)
                    label_141e7ea65:
                        uint32_t zmm2[0x4] =
                            _mm_min_ss(_mm_cvtpd_ps(zx.o(data_14399f938))[0], zmm8.d)
                        
                        if (arg3 == 2)
                            zmm2 = zx.o(0)
                        else if (arg3 == 1 && *(rbx_1 + 0x181) s>= 0)
                            zmm2 = zx.o(0)
                        
                        arg4, zmm7, zmm8 = sub_141ddc430(rbx_1, arg2, zmm2)
                    else
                    label_141e7e9ec:
                        void* rax_4 = rbx_1[4]
                        
                        if (rax_4 != 0)
                            if ((*(rax_4 + 0x38) & 1) == 0 || *(rax_4 + 0x30) == 0)
                                goto label_141e7ea11
                            
                            goto label_141e7ea65
                        
                        rax_4 = *(rbx_1[3] + 0x138)
                        
                        if (rax_4 != 0 && (*(rax_4 + 0x38) & 1) != 0 && *(rax_4 + 0x30) != 0)
                            goto label_141e7ea65
                        
                    label_141e7ea11:
                        int64_t* rcx_6 = rbx_1[3]
                        (*(*rcx_6 + 0x288))(rcx_6)
                        uint8_t rax_7 = sub_142368c40(rbx_1[3])
                        uint8_t rax_8
                        
                        if (rax_7 == 0)
                            rax_8 = sub_142368a80(rbx_1[3])
                        
                        if (rax_7 != 0 || rax_8 != 0)
                            if (arg4.d f<= zmm7.d)
                                goto label_141e7ea65
                            
                            zmm6.d = arg4.d f+ zmm7.d
                            
                            if (zmm6.d f>= rbx_1[0x32].d)
                                goto label_141e7ea65
                            
                            arg4, zmm7 = sub_141e744f0(arg1, rbx_1)
                        else
                            if ((*(rbx_1 + 0x183) & 8) != 0 || (rbx_1[0x30].b & 0x10) == 0)
                                goto label_141e7ea65
                            
                            arg4, zmm7 = sub_141e744f0(arg1, rbx_1)
            else
                arg4, zmm7 = sub_141e744f0(arg1, rbx_1)
        
        rdi_1 += 8
        i = i_4
        i_4 -= 1
    while (i != 1)

char arg_18

if (arg3 != 2)
    zmm8 = sub_142378920(arg1 + 0x5c8)
    int32_t rax_9 = (r13 - 1).d
    int64_t rdi_2 = sx.q(rax_9)
    
    if (rax_9 s>= 0)
        int64_t temp3_1
        
        do
            void* rbx_2 = *(r12 + (rdi_2 << 3))
            
            if (rbx_2 != 0 && (*(rbx_2 + 0x180) & 0x40) != 0 && *(rbx_2 + 0x185) != 2
                    && *sub_1408296b0(arg1 + 0x450, &arg_18, rbx_2) == 0xffffffff)
                for (int64_t* i_1 = *(arg1 + 0x4b8); i_1 != &i_1[sx.q(*(arg1 + 0x4c0))]; 
                        i_1 = &i_1[1])
                    if (*i_1 == rbx_2)
                        goto label_141e7eb2e
                
                zmm8 = sub_142377ef0(arg1 + 0x5c8, rbx_2)
            
        label_141e7eb2e:
            temp3_1 = rdi_2
            rdi_2 -= 1
        while (temp3_1 - 1 s>= 0)
    
    int32_t rbx_3 = arg2[1].d
    int32_t rbx_4 = rbx_3 - 1
    
    if (rbx_3 - 1 s>= 0)
        int64_t rdi_3 = sx.q(rbx_4) << 3
        int64_t rsi_1 = rdi_3
        int32_t temp5_1
        
        do
            if (sub_141e6c030(*(*arg2 + rdi_3)) != 0)
                int32_t rdx_7 = arg2[1].d
                int32_t rax_16 = rdx_7 - rbx_4 - 1
                
                if (rax_16 s>= 1)
                    rax_16 = 1
                
                if (rax_16 != 0)
                    uint64_t rcx_15 = *arg2
                    memcpy(rcx_15 + rsi_1, rcx_15 + (sx.q(rdx_7 - rax_16) << 3), rax_16 << 3)
                    rdx_7 = arg2[1].d
                
                arg2[1].d = rdx_7 - 1
            
            rsi_1 -= 8
            rdi_3 -= 8
            temp5_1 = rbx_4
            rbx_4 -= 1
        while (temp5_1 - 1 s>= 0)
        i_4 = 0

if (r13.d s> 0)
    uint64_t rbx_5 = r12
    uint64_t i_3 = zx.q(r13.d)
    uint64_t i_2
    
    do
        void* rcx_17 = *rbx_5
        
        if (rcx_17 != 0)
            sub_141ddbb40(rcx_17, _mm_min_ss(_mm_cvtpd_ps(zx.o(data_14399f938)).d, zmm8.d))
        
        rbx_5 += 8
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

int32_t rdx_10 = arg2[1].d

if (rdx_10 s>= 0)
    sub_141e6f240(*arg2, rdx_10, arg_18)
    int32_t rax_19 = sub_141e7e4a0(arg1)
    int32_t rdx_11 = arg2[1].d
    
    if (rdx_11 - rax_19 s>= 0)
        i_4 = zx.q(rdx_11 - rax_19)

if (r12 != 0)
    sub_140a74f90(r12)

return zx.q(i_4.d)
