// 函数: sub_1408c04b0
// 地址: 0x1408c04b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9
int64_t arg_20 = r9
int64_t r8
int64_t arg_18 = r8
int64_t rdx
int64_t arg_10 = rdx
char var_68

if (*(arg1 + 0x71) != 0)
    if (*(*(arg1 + 0x278) + 0x9eb0) s> 0)
        void* r15_1 = *(arg1 + 0x228)
        
        if (r15_1 != 0)
            void* rax_2 = sub_142542e20()
            void* rdx_1 = *(r15_1 + 0x10)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
                void* rax_5 = *(arg1 + 0x278)
                int32_t i = 0
                
                if (*(rax_5 + 0x9eb0) s> 0)
                    int64_t rbp_1 = 0
                    int64_t* rsi_1 = nullptr
                    
                    do
                        void* r14_1 = *(rax_5 + 0x9ea8)
                        
                        if (*(rsi_1 + r14_1) != 0 && i s< *(arg1 + 0x180))
                            var_68.d = *(*(arg1 + 0x178) + rbp_1)
                            int128_t zmm0_2
                            int512_t zmm2_1
                            zmm0_2, zmm2_1 = sub_1408bf070(r14_1 + 8 + rsi_1, *(arg1 + 0x10), 
                                *(arg1 + 0xc), *(arg1 + 0x54), var_68)
                            zmm2_1.o = zmm0_2
                            sub_142131b70(r15_1, *(rsi_1 + r14_1))
                        
                        rax_5 = *(arg1 + 0x278)
                        i += 1
                        rsi_1 = &rsi_1[0xfe]
                        rbp_1 += 4
                    while (i s< *(rax_5 + 0x9eb0))
    
    sub_140db3600(arg2, *(arg1 + 0x1cc) + arg3, arg1 + 0x74, arg1 + 0x1e0, *(arg1 + 0xe6), 
        arg1 + 0xac)

int32_t i_1 = 0
int32_t i_2 = 0

if (*(arg1 + 0xc8) s<= 0)
    return 

int64_t rax = *(arg1 + 0xc0)
int64_t rsi_2 = 0

do
    int32_t j = 0
    
    if (*(rsi_2 + rax + 0x18) s> 0)
        int64_t rdi_1 = 0
        
        do
            char var_50_1 = arg5
            int64_t var_58_1 = arg4
            int128_t* var_60
            var_60.d = arg3
            var_68.q = arg2
            sub_1408c04b0(*(*(rsi_2 + rax + 0x10) + rdi_1))
            rax = *(arg1 + 0xc0)
            rdi_1 += 8
            j += 1
        while (j s< *(rsi_2 + rax + 0x18))
        
        i_1 = i_2
    
    i_1 += 1
    rsi_2 += 0x50
    i_2 = i_1
while (i_1 s< *(arg1 + 0xc8))
