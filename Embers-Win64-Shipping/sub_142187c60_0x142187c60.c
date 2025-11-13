// 函数: sub_142187c60
// 地址: 0x142187c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg2

if (arg1[0xca] != 0)
    sub_1421a5650(arg1, 1, 1, arg3)

arg1[0x9b].d = 0

if (*(arg1 + 0x4dc) != 0)
    sub_1405c5570(&arg1[0x9a], 0)

if (rbp == 0)
    *(arg1 + 0x432) &= 0xbf
    return 

int32_t i = 0
int32_t i_1 = 0

if (*(rbp + 0x48) s<= 0)
    *(arg1 + 0x432) &= 0xbf
    return 

int64_t* r15 = nullptr
int64_t* arg_18 = nullptr

do
    void* rbp_1 = *(r15 + *(rbp + 0x40))
    
    if (rbp_1 != 0)
        void* rax_1 = sub_142559820()
        void* rdx = *(rbp_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30
                && i s< arg1[0xc1].d)
            int64_t* r13_1 = *(r15 + arg1[0xc0])
            
            if (r13_1 != 0)
                int32_t j = 0
                
                if (*(rbp_1 + 0x48) s> 0)
                    int64_t* r15_1 = nullptr
                    
                    do
                        int64_t r12_1 = *(r15_1 + *(rbp_1 + 0x40))
                        
                        if (j s>= arg1[0x9b].d)
                            int64_t rdi = sx.q(arg1[0x9b].d)
                            int32_t rax_4 = (rdi + 1).d
                            arg1[0x9b].d = rax_4
                            
                            if (rax_4 s> *(arg1 + 0x4dc))
                                sub_1405a4d70(&arg1[0x9a])
                            
                            *(arg1[0x9a] + (rdi << 3)) = 0
                        
                        int64_t rdi_1 = arg1[0x9a] + (sx.q(j) << 3)
                        
                        if ((*(r12_1 + 0x2c) & 1) != 0)
                            void* rax_6 = arg1[0x15]
                            uint64_t r9_1
                            
                            if (rax_6 != 0)
                                r9_1 = zx.q(*(rax_6 + 0x118))
                            else
                                rax_6 = sub_141ee69e0(arg1)
                                
                                if (rax_6 == 0)
                                    r9_1 = zx.q(data_1439c7a08)
                                else
                                    r9_1 = zx.q(*(rax_6 + 0x118))
                            
                            (*(*r13_1 + 0x168))(r13_1, rdi_1, r12_1, r9_1)
                        
                        j += 1
                        r15_1 = &r15_1[1]
                    while (j s< *(rbp_1 + 0x48))
                    
                    i = i_1
                    r15 = arg_18
    
    rbp = arg2
    i += 1
    r15 = &r15[1]
    i_1 = i
    arg_18 = r15
while (i s< *(rbp + 0x48))

*(arg1 + 0x432) &= 0xbf
