// 函数: sub_141fcd3b0
// 地址: 0x141fcd3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x140)
void* rcx_1
void* rdx_1
void* r8_1

if (r9 != 0)
    rdx_1 = *(r9 + 0x158)
    r8_1 = rdx_1
    rcx_1 = sx.q(*(r9 + 0x160)) * 0x78 + rdx_1

int32_t rdx_2

if (r9 == 0 || rdx_1 == rcx_1)
label_141fcd3ff:
    rdx_2 = -1
else
    while (*(r8_1 + 0x18) != arg1)
        r8_1 += 0x78
        
        if (r8_1 == rcx_1)
            goto label_141fcd3ff
    
    rdx_2 = ((r8_1 - rdx_1) s/ 0x78).d

void var_48
double zmm7_1[0x2]
int128_t zmm8
zmm7_1, zmm8 = sub_142428200(&var_48, rdx_2, r9)
void* rax_2
int512_t zmm1_2
int128_t zmm6
int128_t zmm7_2
rax_2, zmm1_2, zmm6, zmm7_2 = sub_14217c900(arg1, zmm7_1)

if (*(arg1 + 0xb0c) == 0)
    rax_2 = *(arg1 + 0x88)

if (*(arg1 + 0xb0c) == 0 && (rax_2 == 0 || *(rax_2 + 0x134) == 1))
    rax_2.b = 0
else
    rax_2.b = 1

if (rax_2.b != 0 && *(arg1 + 0x10c9) == 0)
    int64_t* rcx_4 = *(arg1 + 0x770)
    int32_t rax_7 = (*(*rcx_4 + 0x158))(rcx_4)
    int64_t rax_9
    
    if (rax_7 == 0)
        int64_t* rcx_5 = *(arg1 + 0x770)
        rax_9 = (*(*rcx_5 + 0x20))(rcx_5)
    
    if (rax_7 != 0 || rax_9 == 0)
        sub_141fbe070(arg1, 6)
    else
        if (*(arg1 + 0xe28) == 0)
            void* rax_10 = *(arg1 + 0x140)
            int64_t* i = *(rax_10 + 0x98)
            
            for (void* rbp_1 = &i[sx.q(*(rax_10 + 0xa0))]; i != rbp_1; i = &i[1])
                int64_t* rbx_1 = *i
                
                if (rbx_1 != 0)
                    char rax_13
                    int32_t rdx_6
                    rax_13, rdx_6 = (*(*rbx_1 + 0x268))(rbx_1)
                    
                    if (rax_13 != 0)
                        void* rcx_7 = rbx_1[0x25]
                        
                        if (rcx_7 == 0)
                            return sub_1424294e0(&var_48)
                        
                        uint8_t rax_15
                        rax_15, zmm1_2, zmm6, zmm7_2, zmm8 =
                            sub_140ce0e10(sub_140d21d80(rcx_7), rdx_6)
                        
                        if (rax_15 == 0)
                            return sub_1424294e0(&var_48)
                        
                        if (sub_1420e6440(rbx_1) == 0)
                            return sub_1424294e0(&var_48)
        
        int128_t var_18_1 = zmm6
        zmm6 = *data_143f3d360
        
        if (not(zmm6.d f< (zx.o(0)).d))
            *(sub_142437e30(*(arg1 + 0x140), 0, 1) + 0x2f0) = zmm6.d
        
        zmm1_2.o = zmm7_2
        int128_t zmm0_2 = sub_141fb39a0(*(arg1 + 0x140), zmm1_2)
        int64_t* i_1 = *(arg1 + 0xcf0)
        
        for (void* rbp_2 = &i_1[sx.q(*(arg1 + 0xcf8))]; i_1 != rbp_2; i_1 = &i_1[1])
            void* rbx_2 = *i_1
            
            if (rbx_2 != 0)
                float zmm0_3
                
                if (9.99999975e-05f f>= *(sub_142437e30(*(arg1 + 0x140), 0, 1) + 0x2f0))
                    zmm0_3 = 1f
                else
                    zmm0_3 = 1f f/ *(sub_142437e30(*(arg1 + 0x140), 0, 1) + 0x2f0)
                
                *(rbx_2 + 0x98) = zmm0_3
                void* rcx_14 = *(rbx_2 + 0x548)
                
                if (rcx_14 != 0)
                    *(rcx_14 + 0x98) = *(rbx_2 + 0x98)
                    void* rax_23 = *(rbx_2 + 0x548)
                    *(rax_23 + 0x32) |= 1
                    int64_t* rcx_15 = *(rbx_2 + 0x548)
                    void* rax_25 = (*(*rcx_15 + 0x628))(rcx_15)
                    
                    if (rax_25 != 0)
                        void* rax_26 = sub_1425a1340()
                        void* rcx_16 = *(rax_25 + 0x10)
                        int64_t rdx_7 = sx.q(*(rax_26 + 0x38))
                        
                        if (rdx_7.d s<= *(rcx_16 + 0x38)
                                && *(*(rcx_16 + 0x30) + (rdx_7 << 3)) == rax_26 + 0x30)
                            *(rax_25 + 0x3a) |= 1
        
        zmm1_2.o = zmm0_2
        sub_141fcb320(arg1, zmm1_2)
        sub_141fab5b0(sub_140b187d0(arg1 + 0xc08), *(arg1 + 0xe20))
        int512_t zmm8_1
        zmm8_1.o = zmm8
        int512_t zmm6_1
        zmm6_1.o = var_18_1

return sub_1424294e0(&var_48)
