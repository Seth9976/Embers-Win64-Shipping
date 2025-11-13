// 函数: sub_14274adb0
// 地址: 0x14274adb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = 0
char* var_50 = &arg_10
int64_t* r15 = arg1
void*** (* var_58)() = j_sub_14274cb00
void* rax = sub_140a756e0(&var_58, &data_143b6e208)
int64_t* r8 = r15[6]
int32_t* rcx_1 = r15[7]
int64_t* r10 = r15[5]
int64_t* r11 = r15[4]
int64_t* rbx = r15[3]
int64_t* r9 = r15[2]
int32_t* rdx = *r15
CRITICAL_SECTION* lpCriticalSection = *r8
int32_t var_60 = r8[1].d
lpCriticalSection.o = lpCriticalSection.o
sub_14276fa40(rax, *rdx, *r15[1], *r9, *rbx, *r11, *r10, &lpCriticalSection, *rcx_1, *r15[8])
int32_t i_3 = data_143b6d9e8
int32_t r9_2 = *r15[9]
int32_t* rax_10 = r15[0xa]
int32_t r10_2 = r9_2 * arg2
int32_t rdx_3 = i_3 * r10_2
int32_t var_78 = r10_2
int32_t r9_4 = r9_2 * i_3 + rdx_3

if (*rax_10 s<= r9_4)
    r9_4 = *rax_10

int32_t i = r9_4 - rdx_3
int32_t i_1 = i

if (i s> 0)
    void* r14_1 = rax + 0x90
    int32_t k_10 = 0
    
    do
        int32_t i_2 = i_3
        
        if (i s<= i_3)
            i_2 = i
        
        int32_t r8_3 = i_3 * r10_2
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i_2 + 3)
        int32_t r9_6 = ((temp0_1 & 3) + temp1_1) s>> 2
        
        if (*r15[0xb] == 0)
            *(rax + 0x10) = *r15[0xd]
            *(rax + 0x40) = i_2
            *(rax + 0x44) = r9_6
            *(rax + 0x48) = r8_3
            *(rax + 0xa8) = 0
            *(rax + 0xa4) = 0xffffffff
            *(rax + 0xac) = 0
            int32_t rax_20 = *(r14_1 + 0xc)
            *(r14_1 + 8) = 0
            
            if (rax_20 s< 0 && rax_20 != 0)
                sub_1405dadb0(r14_1, 0)
            
            int64_t rdi_2 = sx.q(*(r14_1 + 8))
            
            if (i_2 s> rdi_2.d)
                *(r14_1 + 8) = i_2
                
                if (i_2 s> *(r14_1 + 0xc))
                    sub_1405a4cf0(r14_1)
                
                memset(*r14_1 + (rdi_2 << 2), 0, sx.q(i_2 - rdi_2.d) << 2)
                k_10 = 0
            else if (i_2 s< rdi_2.d && i_2 != rdi_2.d)
                *(r14_1 + 8) = i_2
                sub_1405dac90(r14_1)
            
            char j
            
            do
                char* rax_22 = *(rax + 0x10)
                uint32_t r15_1 = zx.d(*rax_22)
                j = r15_1.b
                *(rax + 0x10) = &rax_22[1]
                
                if (r15_1 u> 0x58)
                    sub_140af98a0("Unknown", 0x98a, u"Unknown op code 0x%02x", zx.q(r15_1.b))
                    return sub_140afbb40()
                
                uint128_t zmm0_1
                
                switch (r15_1)
                    case 1
                        uint32_t rcx_17 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_17.b == 0)
                            sub_1427521b0(rax)
                        else if (rcx_17 == 1)
                            sub_142752310(rax)
                        else if (rcx_17 == 2)
                            sub_142752240(rax)
                        else if (rcx_17 == 3)
                            sub_1427523d0(rax)
                    case 2
                        uint32_t rcx_22 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_22.b == 0)
                            sub_142755a50(rax)
                        else if (rcx_22 == 1)
                            sub_142755bb0(rax)
                        else if (rcx_22 == 2)
                            sub_142755ae0(rax)
                        else if (rcx_22 == 3)
                            sub_142755c70(rax)
                    case 3
                        uint32_t rcx_27 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_27.b == 0)
                            sub_142754900(rax)
                        else if (rcx_27 == 1)
                            sub_142754a60(rax)
                        else if (rcx_27 == 2)
                            sub_142754990(rax)
                        else if (rcx_27 == 3)
                            sub_142754b20(rax)
                    case 4
                        uint32_t rcx_32 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_32.b == 0)
                            sub_142753a30(rax)
                        else if (rcx_32 == 1)
                            sub_142753be0(rax)
                        else if (rcx_32 == 2)
                            sub_142753af0(rax)
                        else if (rcx_32 == 3)
                            sub_142753cd0(rax)
                    case 5
                        uint64_t rcx_37 = zx.q(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_37.d u<= 7)
                            switch (rcx_37)
                                case 0
                                    sub_14275a9e0(rax)
                                case 1
                                    sub_14275ad80(rax)
                                case 2
                                    sub_14275ab90(rax)
                                case 3
                                    sub_14275af80(rax)
                                case 4
                                    sub_14275aaa0(rax)
                                case 5
                                    sub_14275ae60(rax)
                                case 6
                                    sub_14275ac70(rax)
                                case 7
                                    sub_14275b090(rax)
                    case 6
                        uint64_t rcx_48 = zx.q(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_48.d u<= 7)
                            switch (rcx_48)
                                case 0
                                    sub_14275a180(rax)
                                case 1
                                    sub_14275a560(rax)
                                case 2
                                    sub_14275a350(rax)
                                case 3
                                    sub_14275a770(rax)
                                case 4
                                    sub_14275a250(rax)
                                case 5
                                    sub_14275a650(rax)
                                case 6
                                    sub_14275a440(rax)
                                case 7
                                    sub_14275a890(rax)
                    case 7
                        sub_14275e890(rax)
                    case 8
                        sub_14275eb50(rax)
                    case 9
                        sub_14275f020(rax)
                    case 0xa
                        sub_14275e4c0(rax)
                    case 0xb
                        sub_14275cb60(rax)
                    case 0xc
                        sub_14275d4e0(rax)
                    case 0xd
                        sub_14275d2a0(rax)
                    case 0xe
                        sub_14275e330(rax)
                    case 0xf
                        sub_14275de80(rax)
                    case 0x10
                        sub_14275ee00(rax)
                    case 0x11
                        sub_14275d070(rax)
                    case 0x12
                        sub_14275f2d0(rax)
                    case 0x13
                        sub_14275c650(rax)
                    case 0x14
                        sub_14275c340(rax)
                    case 0x15
                        sub_14275c960(rax)
                    case 0x16
                        uint32_t rcx_74 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_74.b == 0)
                            sub_1427519f0(rax)
                        else if (rcx_74 == 1)
                            sub_142751d40(rax)
                        else if (rcx_74 == 2)
                            sub_142751b50(rax)
                        else if (rcx_74 == 3)
                            sub_142751f40(rax)
                    case 0x17
                        sub_14275cf00(rax)
                    case 0x18
                        sub_14275d9b0(rax)
                    case 0x19
                        uint32_t rcx_82 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_82.b == 0)
                            sub_142754400(rax)
                        else if (rcx_82 == 1)
                            sub_142754670(rax)
                        else if (rcx_82 == 2)
                            sub_142754520(rax)
                        else if (rcx_82 == 3)
                            sub_1427547b0(rax)
                    case 0x1a
                        sub_14275db20(rax)
                    case 0x1b
                        sub_14275f4d0(rax)
                    case 0x1c
                        uint64_t rcx_89 = zx.q(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_89.d u<= 7)
                            switch (rcx_89)
                                case 0
                                    sub_142759990(rax)
                                case 1
                                    sub_142759d30(rax)
                                case 2
                                    sub_142759b40(rax)
                                case 3
                                    sub_142759f30(rax)
                                case 4
                                    sub_142759a50(rax)
                                case 5
                                    sub_142759e10(rax)
                                case 6
                                    sub_142759c20(rax)
                                case 7
                                    sub_14275a040(rax)
                    case 0x1d
                        uint32_t rcx_100 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_100.b == 0)
                            sub_1427540f0(rax)
                        else if (rcx_100 == 1)
                            sub_142754250(rax)
                        else if (rcx_100 == 2)
                            sub_142754180(rax)
                        else if (rcx_100 == 3)
                            sub_142754310(rax)
                    case 0x1e
                        uint32_t rcx_105 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_105.b == 0)
                            sub_142753de0(rax)
                        else if (rcx_105 == 1)
                            sub_142753f40(rax)
                        else if (rcx_105 == 2)
                            sub_142753e70(rax)
                        else if (rcx_105 == 3)
                            sub_142754000(rax)
                    case 0x1f
                        uint32_t rcx_110 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_110.b == 0)
                            sub_1427552d0(rax)
                        else if (rcx_110 == 1)
                            sub_142755670(rax)
                        else if (rcx_110 == 2)
                            sub_142755490(rax)
                        else if (rcx_110 == 3)
                            sub_142755860(rax)
                    case 0x20
                        sub_14275ea00(rax)
                    case 0x21
                        sub_14275ecb0(rax)
                    case 0x22
                        sub_14275f180(rax)
                    case 0x23
                        sub_14275e5e0(rax)
                    case 0x24
                        uint32_t rax_63 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rax_63.b == 0)
                            int32_t rdx_13 = *(rax + 0x80)
                            *(rax + 0x10) = &rax_22[4]
                            uint64_t rdx_14 = zx.q(rdx_13 * zx.d(*(rax_22 + 4)))
                            *(rax + 0x10) = &rax_22[6]
                            int32_t k_18 = *(rax + 0x40)
                            int32_t* rdx_15 = rdx_14 + *(rax + 0x70)
                            
                            if (k_18 s> 0)
                                uint64_t k_13 = zx.q(k_18)
                                uint64_t k
                                
                                do
                                    int32_t* rax_69 = rdx_15
                                    rdx_15 = &rdx_15[1]
                                    *rax_69 = 0
                                    k = k_13
                                    k_13 -= 1
                                while (k != 1)
                        else if (rax_63 == 1)
                            uint32_t rcx_118 = zx.d(*(rax_22 + 2))
                            int64_t rax_64 = 0
                            int32_t* r8_8 = *(rax + 0x20)
                            void* r9_9 = &rax_22[4]
                            *(rax + 0x10) = r9_9
                            int32_t rdx_9 = *r8_8
                            
                            if (rcx_118 s>= rdx_9)
                                do
                                    rcx_118 -= rdx_9
                                    rax_64 += 1
                                    rdx_9 = r8_8[rax_64]
                                while (rcx_118 s>= rdx_9)
                                
                                r9_9 = *(rax + 0x10)
                            
                            uint64_t rdx_11 = zx.q(*(rax + 0x80) * zx.d(*r9_9))
                            *(rax + 0x10) = r9_9 + 2
                            int32_t k_17 = *(rax + 0x40)
                            int32_t* rdx_12 = rdx_11 + *(rax + 0x70)
                            
                            if (k_17 s> 0)
                                uint64_t k_12 = zx.q(k_17)
                                uint64_t k_1
                                
                                do
                                    int32_t* rax_66 = rdx_12
                                    rdx_12 = &rdx_12[1]
                                    *rax_66 = 0
                                    k_1 = k_12
                                    k_12 -= 1
                                while (k_1 != 1)
                    case 0x25
                        uint32_t rcx_139 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_139.b == 0)
                            sub_142753100(rax)
                        else if (rcx_139 == 1)
                            sub_142753260(rax)
                        else if (rcx_139 == 2)
                            sub_142753190(rax)
                        else if (rcx_139 == 3)
                            sub_142753320(rax)
                    case 0x26
                        uint32_t rcx_144 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_144.b == 0)
                            sub_142752df0(rax)
                        else if (rcx_144 == 1)
                            sub_142752f50(rax)
                        else if (rcx_144 == 2)
                            sub_142752e80(rax)
                        else if (rcx_144 == 3)
                            sub_142753010(rax)
                    case 0x27
                        uint32_t rcx_149 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_149.b == 0)
                            sub_142752ae0(rax)
                        else if (rcx_149 == 1)
                            sub_142752c40(rax)
                        else if (rcx_149 == 2)
                            sub_142752b70(rax)
                        else if (rcx_149 == 3)
                            sub_142752d00(rax)
                    case 0x28
                        uint32_t rcx_154 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_154.b == 0)
                            sub_1427527d0(rax)
                        else if (rcx_154 == 1)
                            sub_142752930(rax)
                        else if (rcx_154 == 2)
                            sub_142752860(rax)
                        else if (rcx_154 == 3)
                            sub_1427529f0(rax)
                    case 0x29
                        uint32_t rcx_159 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_159.b == 0)
                            sub_1427524c0(rax)
                        else if (rcx_159 == 1)
                            sub_142752620(rax)
                        else if (rcx_159 == 2)
                            sub_142752550(rax)
                        else if (rcx_159 == 3)
                            sub_1427526e0(rax)
                    case 0x2a
                        uint32_t rcx_164 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_164.b == 0)
                            sub_142753410(rax)
                        else if (rcx_164 == 1)
                            sub_142753570(rax)
                        else if (rcx_164 == 2)
                            sub_1427534a0(rax)
                        else if (rcx_164 == 3)
                            sub_142753630(rax)
                    case 0x2b
                        uint64_t rcx_169 = zx.q(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_169.d u<= 7)
                            switch (rcx_169)
                                case 0
                                    sub_14275b1d0(rax)
                                case 1
                                    sub_14275b580(rax)
                                case 2
                                    sub_14275b380(rax)
                                case 3
                                    sub_14275b780(rax)
                                case 4
                                    sub_14275b290(rax)
                                case 5
                                    sub_14275b660(rax)
                                case 6
                                    sub_14275b470(rax)
                                case 7
                                    sub_14275b890(rax)
                    case 0x2c
                        uint32_t rcx_180 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_180.b == 0)
                            sub_14274dcd0(rax)
                        else if (rcx_180 == 1)
                            sub_14274de30(rax)
                        else if (rcx_180 == 2)
                            sub_14274dd60(rax)
                        else if (rcx_180 == 3)
                            sub_14274df00(rax)
                    case 0x2d
                        uint32_t rcx_185 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_185.b == 0)
                            sub_1427516d0(rax)
                        else if (rcx_185 == 1)
                            sub_142751830(rax)
                        else if (rcx_185 == 2)
                            sub_142751760(rax)
                        else if (rcx_185 == 3)
                            sub_142751900(rax)
                    case 0x2e
                        uint32_t rcx_190 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_190.b == 0)
                            sub_142751340(rax)
                        else if (rcx_190 == 1)
                            sub_1427514e0(rax)
                        else if (rcx_190 == 2)
                            sub_1427513f0(rax)
                        else if (rcx_190 == 3)
                            sub_1427515c0(rax)
                    case 0x2f
                        uint32_t rcx_195 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_195.b == 0)
                            sub_142750710(rax)
                        else if (rcx_195 == 1)
                            sub_142750990(rax)
                        else if (rcx_195 == 2)
                            sub_142750840(rax)
                        else if (rcx_195 == 3)
                            sub_142750af0(rax)
                    case 0x30
                        uint64_t rcx_200 = zx.q(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_200.d u<= 7)
                            switch (rcx_200)
                                case 0
                                    sub_142759030(rax)
                                case 1
                                    sub_142759480(rax)
                                case 2
                                    sub_142759230(rax)
                                case 3
                                    sub_1427596e0(rax)
                                case 4
                                    sub_142759120(rax)
                                case 5
                                    sub_142759590(rax)
                                case 6
                                    sub_142759340(rax)
                                case 7
                                    sub_142759820(rax)
                    case 0x31
                        uint32_t rcx_211 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_211.b == 0)
                            sub_142750fe0(rax)
                        else if (rcx_211 == 1)
                            sub_142751160(rax)
                        else if (rcx_211 == 2)
                            sub_142751080(rax)
                        else if (rcx_211 == 3)
                            sub_142751240(rax)
                    case 0x32
                        uint32_t rcx_216 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_216.b == 0)
                            sub_142750c80(rax)
                        else if (rcx_216 == 1)
                            sub_142750e00(rax)
                        else if (rcx_216 == 2)
                            sub_142750d20(rax)
                        else if (rcx_216 == 3)
                            sub_142750ee0(rax)
                    case 0x33
                        sub_14275bde0(rax)
                    case 0x34
                        sub_14275c0a0(rax)
                    case 0x35
                        sub_14275c1c0(rax)
                    case 0x36
                        sub_14275b9e0(rax)
                    case 0x37
                        uint32_t rcx_225 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_225.b == 0)
                            sub_1427500b0(rax)
                        else if (rcx_225 == 1)
                            sub_142750210(rax)
                        else if (rcx_225 == 2)
                            sub_142750140(rax)
                        else if (rcx_225 == 3)
                            sub_1427502d0(rax)
                    case 0x38
                        uint32_t rcx_230 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_230.b == 0)
                            sub_14274fd60(rax)
                        else if (rcx_230 == 1)
                            sub_14274fee0(rax)
                        else if (rcx_230 == 2)
                            sub_14274fe00(rax)
                        else if (rcx_230 == 3)
                            sub_14274ffb0(rax)
                    case 0x39
                        uint32_t rcx_235 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_235.b == 0)
                            sub_14274fa40(rax)
                        else if (rcx_235 == 1)
                            sub_14274fba0(rax)
                        else if (rcx_235 == 2)
                            sub_14274fad0(rax)
                        else if (rcx_235 == 3)
                            sub_14274fc70(rax)
                    case 0x3a
                        uint32_t rcx_240 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_240.b == 0)
                            sub_14274f6f0(rax)
                        else if (rcx_240 == 1)
                            sub_14274f870(rax)
                        else if (rcx_240 == 2)
                            sub_14274f790(rax)
                        else if (rcx_240 == 3)
                            sub_14274f940(rax)
                    case 0x3b
                        uint32_t rcx_245 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_245.b == 0)
                            sub_14274f3d0(rax)
                        else if (rcx_245 == 1)
                            sub_14274f530(rax)
                        else if (rcx_245 == 2)
                            sub_14274f460(rax)
                        else if (rcx_245 == 3)
                            sub_14274f600(rax)
                    case 0x3c
                        uint32_t rcx_250 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_250.b == 0)
                            sub_1427503c0(rax)
                        else if (rcx_250 == 1)
                            sub_142750540(rax)
                        else if (rcx_250 == 2)
                            sub_142750460(rax)
                        else if (rcx_250 == 3)
                            sub_142750610(rax)
                    case 0x3d
                        uint32_t rcx_255 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_255.b == 0)
                            sub_14274dff0(rax)
                        else if (rcx_255 == 1)
                            sub_14274e150(rax)
                        else if (rcx_255 == 2)
                            sub_14274e080(rax)
                        else if (rcx_255 == 3)
                            sub_14274e220(rax)
                    case 0x3e
                        uint32_t rcx_260 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_260.b == 0)
                            sub_14274e850(rax)
                        else if (rcx_260 == 1)
                            sub_14274e9b0(rax)
                        else if (rcx_260 == 2)
                            sub_14274e8e0(rax)
                        else if (rcx_260 == 3)
                            sub_14274ea80(rax)
                    case 0x3f
                        uint32_t rcx_265 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_265.b == 0)
                            sub_14274f0b0(rax)
                        else if (rcx_265 == 1)
                            sub_14274f210(rax)
                        else if (rcx_265 == 2)
                            sub_14274f140(rax)
                        else if (rcx_265 == 3)
                            sub_14274f2e0(rax)
                    case 0x40
                        sub_14275bf60(rax)
                    case 0x41
                        uint32_t rcx_271 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_271.b == 0)
                            sub_14274e310(rax)
                        else if (rcx_271 == 1)
                            sub_14274e580(rax)
                        else if (rcx_271 == 2)
                            sub_14274e430(rax)
                        else if (rcx_271 == 3)
                            sub_14274e6d0(rax)
                    case 0x42
                        uint32_t rcx_276 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_276.b == 0)
                            sub_14274eb70(rax)
                        else if (rcx_276 == 1)
                            sub_14274ede0(rax)
                        else if (rcx_276 == 2)
                            sub_14274ec90(rax)
                        else if (rcx_276 == 3)
                            sub_14274ef30(rax)
                    case 0x43
                        uint32_t rcx_281 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_281.b == 0)
                            sub_14274dff0(rax)
                        else if (rcx_281 == 1)
                            sub_14274e150(rax)
                        else if (rcx_281 == 2)
                            sub_14274e080(rax)
                        else if (rcx_281 == 3)
                            sub_14274e220(rax)
                    case 0x44
                        uint32_t rcx_286 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_286.b == 0)
                            sub_14274e850(rax)
                        else if (rcx_286 == 1)
                            sub_14274e9b0(rax)
                        else if (rcx_286 == 2)
                            sub_14274e8e0(rax)
                        else if (rcx_286 == 3)
                            sub_14274ea80(rax)
                    case 0x45
                        uint32_t rcx_291 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_291.b == 0)
                            sub_14274f0b0(rax)
                        else if (rcx_291 == 1)
                            sub_14274f210(rax)
                        else if (rcx_291 == 2)
                            sub_14274f140(rax)
                        else if (rcx_291 == 3)
                            sub_14274f2e0(rax)
                    case 0x46
                        sub_14275bf60(rax)
                    case 0x47
                        sub_14275d8a0(rax)
                    case 0x48
                        sub_14275dd70(rax)
                    case 0x49
                        sub_14275d770(rax)
                    case 0x4a
                        sub_14275cc80(rax)
                    case 0x4b
                        sub_14275dc50(rax)
                    case 0x4c
                        sub_14275cdc0(rax)
                    case 0x4d
                        uint64_t rdx_27 = zx.q(*(rax_22 + 1))
                        int32_t r10_6 = *(rax + 0x80)
                        int32_t k_22 = *(rax + 0x44)
                        *(rax + 0x10) = &rax_22[3]
                        uint64_t r9_15 = zx.q(*(rax_22 + 3))
                        *(rax + 0x10) = &rax_22[5]
                        uint32_t rcx_311 = zx.d(*(rax_22 + 5))
                        int64_t* r8_16 = rdx_27 * 0x70 + *(rax + 0x50)
                        *(rax + 0x10) = &rax_22[7]
                        void* r10_8 = zx.q(r10_6 * rcx_311) + *(rax + 0x70)
                        uint128_t* rax_202 = *(*r8_16 + (r9_15 << 3))
                            + ((sx.q(*(r8_16 + 0x14)) + sx.q(*(rax + 0x48))) << 2)
                        
                        if (k_22 s> 0)
                            uint64_t k_15 = zx.q(k_22)
                            uint64_t k_2
                            
                            do
                                r10_8 += 0x10
                                zmm0_1 = *rax_202
                                rax_202 = &rax_202[1]
                                *(r10_8 - 0x10) = zmm0_1
                                k_2 = k_15
                                k_15 -= 1
                            while (k_2 != 1)
                    case 0x4e
                        uint64_t rdx_30 = zx.q(*(rax_22 + 1))
                        int32_t r9_16 = *(rax + 0x80)
                        int32_t k_21 = *(rax + 0x44)
                        *(rax + 0x10) = &rax_22[3]
                        uint32_t r8_17 = zx.d(*(rax_22 + 3))
                        *(rax + 0x10) = &rax_22[5]
                        int64_t* rdx_32 = rdx_30 * 0x70 + *(rax + 0x50)
                        uint64_t r9_17 = zx.q(r9_16 * zx.d(*(rax_22 + 5)))
                        *(rax + 0x10) = &rax_22[7]
                        int64_t r8_18 = sx.q(*(rdx_32 + 0x14))
                        void* r9_18 = r9_17 + *(rax + 0x70)
                        int64_t rdx_33 = *(*rdx_32 + (zx.q(r8_17) << 3))
                        
                        if (k_21 s> 0)
                            uint64_t k_11 = zx.q(k_21)
                            uint64_t k_3
                            
                            do
                                r9_18 += 0x10
                                zmm0_1 = *(rdx_33 + (r8_18 << 2))
                                *(r9_18 - 0x10) = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
                                k_3 = k_11
                                k_11 -= 1
                            while (k_3 != 1)
                    case 0x4f
                        uint32_t rax_181 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rax_181.b == 0)
                            uint64_t r10_4 = zx.q(*(rax_22 + 2))
                            int32_t r8_12 = *(rax + 0x80)
                            *(rax + 0x10) = &rax_22[4]
                            uint32_t r11_2 = zx.d(*(rax_22 + 4))
                            *(rax + 0x10) = &rax_22[6]
                            uint32_t rax_192 = zx.d(*(rax_22 + 6))
                            *(rax + 0x10) = &rax_22[8]
                            uint64_t rcx_309 = zx.q(*(rax_22 + 8))
                            int32_t* r11_4 = zx.q(r11_2 * r8_12) + *(rax + 0x70)
                            void* rdx_26 = r10_4 * 0x70 + *(rax + 0x50)
                            int32_t* r8_14 = zx.q(r8_12 * rax_192) + *(rax + 0x70)
                            bool cond:6_1 = *(rax + 0x40) s<= 0
                            *(rax + 0x10) = &rax_22[0xa]
                            int64_t r10_5 = sx.q(*(rdx_26 + 0x14))
                            int32_t k_4 = 0
                            int64_t r9_14 = *(*(rdx_26 + 8) + (rcx_309 << 3))
                            
                            if (not(cond:6_1))
                                do
                                    int64_t rax_195 = sx.q(*r11_4)
                                    
                                    if (rax_195.d != 0xffffffff)
                                        *(r9_14 + ((r10_5 + rax_195) << 2)) = *r8_14
                                    
                                    r11_4 = &r11_4[1]
                                    r8_14 = &r8_14[1]
                                    k_4 += 1
                                while (k_4 s< *(rax + 0x40))
                        else if (rax_181 == 1)
                            int16_t r11_1 = *(rax_22 + 2)
                            int32_t r8_9 = *(rax + 0x80)
                            int32_t* r9_12 = *(rax + 0x20)
                            void* r10_3 = &rax_22[8]
                            *(rax + 0x10) = &rax_22[4]
                            uint32_t rcx_303 = zx.d(*(rax_22 + 4))
                            *(rax + 0x10) = &rax_22[6]
                            uint32_t rcx_304 = zx.d(*(rax_22 + 6))
                            int64_t rdx_20 = 0
                            *(rax + 0x10) = r10_3
                            int32_t rax_183 = *r9_12
                            int32_t* r8_11 = zx.q(r8_9 * rcx_303) + *(rax + 0x70)
                            
                            if (rcx_304 s>= rax_183)
                                do
                                    rdx_20 += 1
                                    rcx_304 -= rax_183
                                    rax_183 = r9_12[rdx_20]
                                while (rcx_304 s>= rax_183)
                                
                                r10_3 = *(rax + 0x10)
                            
                            uint64_t rdx_21 = zx.q(*r10_3)
                            int32_t r9_13 = *(sx.q(rcx_304) + *(*(rax + 0x18) + (rdx_20 << 3)))
                            *(rax + 0x10) = r10_3 + 2
                            void* rcx_307 = zx.q(r11_1) * 0x70 + *(rax + 0x50)
                            int64_t rdx_22 =
                                *(*(rcx_307 + 8) + (rdx_21 << 3)) + (sx.q(*(rcx_307 + 0x14)) << 2)
                            int32_t k_5 = 0
                            
                            if (*(rax + 0x40) s> 0)
                                do
                                    int64_t rax_190 = sx.q(*r8_11)
                                    
                                    if (rax_190.d != 0xffffffff)
                                        *(rdx_22 + (rax_190 << 2)) = r9_13
                                    
                                    r8_11 = &r8_11[1]
                                    k_5 += 1
                                while (k_5 s< *(rax + 0x40))
                    case 0x50
                        uint32_t rcx_315 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_315.b == 0)
                            sub_14274d770(rax)
                        else if (rcx_315 == 1)
                            sub_14274d810(rax)
                    case 0x51
                        uint32_t rcx_318 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        int64_t* rax_212 = (zx.q(rcx_318) << 4) + *(rax + 0x30)
                        
                        if (rax_212[1].d == 0)
                            (*(*nullptr + 0x48))(0, rax)
                        else
                            int64_t* rcx_319 = *rax_212
                            (*(*rcx_319 + 0x48))(rcx_319, rax)
                    case 0x52
                        int32_t r8_19 = *(rax + 0x48)
                        uint128_t zmm4_1 = data_142fc95e0
                        uint64_t rdx_38 = zx.q(*(rax + 0x80) * zx.d(*(rax_22 + 1)))
                        *(rax + 0x10) = &rax_22[3]
                        int32_t k_20 = *(rax + 0x44)
                        uint128_t zmm3 = _mm_unpacklo_epi32(zx.o(r8_19), zx.q(r8_19 + 2))
                        uint128_t zmm2 = _mm_unpacklo_epi32(zx.o(r8_19 + 1), zx.q(r8_19 + 3))
                        uint128_t* rdx_39 = rdx_38 + *(rax + 0x70)
                        zmm3 = _mm_unpacklo_epi32(zmm3, zmm2.q)
                        
                        if (k_20 s> 0)
                            uint64_t k_16 = zx.q(k_20)
                            uint64_t k_6
                            
                            do
                                uint128_t* rax_217 = rdx_39
                                rdx_39 = &rdx_39[1]
                                zmm0_1 = _mm_add_epi32(zmm4_1, zmm3)
                                *rax_217 = zmm3
                                zmm3 = zmm0_1
                                k_6 = k_16
                                k_16 -= 1
                            while (k_6 != 1)
                    case 0x53
                        uint32_t rax_70 = zx.d(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rax_70.b == 0)
                            int32_t rdx_16 = *(rax + 0x80)
                            *(rax + 0x10) = &rax_22[6]
                            uint64_t rdx_17 = zx.q(rdx_16 * zx.d(*(rax_22 + 6)))
                            *(rax + 0x10) = &rax_22[8]
                            int32_t k_19 = *(rax + 0x40)
                            int32_t* rdx_18 = rdx_17 + *(rax + 0x70)
                            
                            if (k_19 s> 0)
                                uint64_t k_14 = zx.q(k_19)
                                uint64_t k_7
                                
                                do
                                    int32_t* rax_73 = rdx_18
                                    rdx_18 = &rdx_18[1]
                                    *rax_73 = 0
                                    k_7 = k_14
                                    k_14 -= 1
                                while (k_7 != 1)
                        else if (rax_70 == 1)
                            sub_14274db80(rax)
                        else if (rax_70 == 2)
                            sub_14274daf0(rax)
                        else if (rax_70 == 3)
                            sub_14274dc10(rax)
                    case 0x54
                        uint64_t rcx_128 = zx.q(rax_22[1])
                        *(rax + 0x10) = &rax_22[2]
                        
                        if (rcx_128.d u<= 7)
                            switch (rcx_128)
                                case 0
                                    sub_142755d60(rax)
                                case 1
                                    sub_142757620(rax)
                                case 2
                                    sub_142756980(rax)
                                case 3
                                    sub_1427582e0(rax)
                                case 4
                                    sub_142756350(rax)
                                case 5
                                    sub_142757c60(rax)
                                case 6
                                    sub_142756fb0(rax)
                                case 7
                                    sub_142758970(rax)
                    case 0x55
                        uint32_t rcx_322 = zx.d(*(rax_22 + 1))
                        int32_t* r8_20 = *(rax + 0x20)
                        *(rax + 0x10) = &rax_22[3]
                        uint32_t rax_219 = rcx_322
                        int64_t rcx_323 = 0
                        
                        for (int32_t k_8 = *r8_20; rax_219 s>= k_8; k_8 = r8_20[rcx_323])
                            rax_219 -= k_8
                            rcx_323 += 1
                    case 0x57
                        uint64_t rdx_40 = zx.q(*(rax_22 + 1))
                        int64_t r14_2 = *(rax + 0x70)
                        *(rax + 0x10) = &rax_22[3]
                        int32_t k_9 = 0
                        uint32_t r12_1 = zx.d(*(rax_22 + 3))
                        *(rax + 0x10) = &rax_22[5]
                        uint32_t r9_19 = zx.d(*(rax_22 + 5))
                        *(rax + 0x10) = &rax_22[7]
                        int64_t rcx_324 = *(rax + 0x50)
                        int64_t rax_223 = rdx_40 * 0x70
                        int32_t r11_5 = *(rax_223 + rcx_324 + 0x14)
                        int64_t* r13_1 = *(rax_223 + rcx_324 + 0x18)
                        int32_t rcx_325 = *(rax + 0x80)
                        uint64_t rdx_42 = zx.q(r9_19 * rcx_325)
                        int32_t var_74_1 = r11_5
                        int64_t* rbx_1 = *(rax + 0x60) + zx.q(rdx_40.d) * 0x18
                        int32_t* r14_3 = r14_2 + rdx_42
                        
                        if (*(rax + 0x40) s> 0)
                            do
                                int32_t rax_225 = *r14_3
                                int64_t rdi_3 = sx.q(*(r14_3 + zx.q(r12_1 * rcx_325) - rdx_42))
                                
                                if (rax_225 != 0xffffffff)
                                    *(*r13_1 + (rdi_3 << 2)) = rax_225 + r11_5
                                    
                                    if (rbx_1[2].d s>= rdi_3.d)
                                        rdi_3 = zx.q(rbx_1[2].d)
                                    
                                    rbx_1[2].d = rdi_3.d
                                else
                                    int64_t rbp_5 = sx.q(rbx_1[1].d)
                                    int32_t rax_226 = (rbp_5 + 1).d
                                    rbx_1[1].d = rax_226
                                    
                                    if (rax_226 s> *(rbx_1 + 0xc))
                                        sub_1405a4cf0(rbx_1)
                                        r11_5 = var_74_1
                                    
                                    *(*rbx_1 + (rbp_5 << 2)) = rdi_3.d
                                
                                k_9 += 1
                                r14_3 = &r14_3[1]
                            while (k_9 s< *(rax + 0x40))
                    case 0x58
                        uint64_t rax_229 = zx.q(*(rax_22 + 1))
                        int32_t r8_21 = *(rax + 0x80)
                        *(rax + 0x10) = &rax_22[3]
                        void* r11_6 = *(rax + 0x50)
                        int64_t r10_10 = rax_229 * 0x70
                        int32_t rax_230 = *(r10_10 + r11_6 + 0x40)
                        int64_t* rdi_4 = *(r10_10 + r11_6 + 0x20)
                        int64_t* rbx_2 = *(r10_10 + r11_6 + 0x28)
                        void* r14_6 = zx.q(zx.d(*(rax_22 + 3)) * r8_21) + *(rax + 0x70)
                        *(rax + 0x10) = &rax_22[5]
                        uint32_t r13_2 = zx.d(*(rax_22 + 5))
                        *(rax + 0x10) = &rax_22[7]
                        int32_t* r12_4 = *(r10_10 + r11_6 + 0x30)
                        CRITICAL_SECTION* lpCriticalSection_1 = r11_6 + 0x48 + r10_10
                        int64_t* var_70_1 = rdi_4
                        lpCriticalSection = lpCriticalSection_1
                        int64_t r13_4 = zx.q(r13_2 * r8_21) + *(rax + 0x70)
                        EnterCriticalSection(lpCriticalSection_1)
                        
                        if (*(rax + 0x40) s> 0)
                            void* r13_5 = r13_4 - r14_6
                            
                            do
                                int64_t rcx_330 = sx.q(*r12_4)
                                r14_6 += 4
                                *r12_4 = (rcx_330 - 1).d
                                int64_t rax_234 = *rdi_4
                                int32_t r15_2 = *(rax_234 + (rcx_330 << 2) - 4)
                                *(rax_234 + (rcx_330 << 2) - 4) = 0xffffffff
                                *(r14_6 - 4) = r15_2
                                *(r14_6 + r13_5 - 4) = rax_230
                                int64_t rdi_5 = sx.q(rbx_2[1].d)
                                int32_t rax_236 = (rdi_5 + 1).d
                                rbx_2[1].d = rax_236
                                
                                if (rax_236 s> *(rbx_2 + 0xc))
                                    sub_1405a4cf0(rbx_2)
                                
                                k_10 += 1
                                *(*rbx_2 + (rdi_5 << 2)) = r15_2
                                rdi_4 = var_70_1
                            while (k_10 s< *(rax + 0x40))
                        
                        LeaveCriticalSection(lpCriticalSection)
                
                k_10 = 0
            while (j != 0)
            r15 = arg1
            r14_1 = rax + 0x90
        else
            *(rax + 0x10) = *r15[0xc]
            *(rax + 0x40) = i_2
            *(rax + 0x44) = r9_6
            *(rax + 0x48) = r8_3
            *(rax + 0xa8) = 0
            *(rax + 0xa4) = 0xffffffff
            *(rax + 0xac) = 0
            int32_t rax_13 = *(r14_1 + 0xc)
            *(r14_1 + 8) = 0
            
            if (rax_13 s< 0 && rax_13 != 0)
                sub_1405dadb0(r14_1, 0)
            
            int64_t rdi_1 = sx.q(*(r14_1 + 8))
            
            if (i_2 s> rdi_1.d)
                *(r14_1 + 8) = i_2
                
                if (i_2 s> *(r14_1 + 0xc))
                    sub_1405a4cf0(r14_1)
                
                memset(*r14_1 + (rdi_1 << 2), 0, sx.q(i_2 - rdi_1.d) << 2)
            else if (i_2 s< rdi_1.d && i_2 != rdi_1.d)
                *(r14_1 + 8) = i_2
                sub_1405dac90(r14_1)
            
            int64_t* rax_15 = *(rax + 0x10)
            int64_t j_1 = *rax_15
            *(rax + 0x10) = &rax_15[1]
            
            while (j_1 != 0)
                j_1(rax)
                int64_t* rax_17 = *(rax + 0x10)
                j_1 = *rax_17
                *(rax + 0x10) = &rax_17[1]
        
        k_10 = 0
        i_3 = data_143b6d9e8
        r10_2 = var_78 + 1
        i = i_1 - i_3
        var_78 = r10_2
        i_1 = i
    while (i s> 0)

return sub_142763dd0(rax)
