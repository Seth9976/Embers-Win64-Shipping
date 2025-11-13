// 函数: sub_1408496f0
// 地址: 0x1408496f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

uint64_t i_2 = zx.q(arg2)

if (((*(arg1 + 0x6b8) u>> 4).b & 1) != 0)
    return 

if (*(arg1 + 0x6bc) != 0)
    sub_1408622c0(arg1)
    sub_14084fd50(arg1)

arg2.b = 1
char r14_1 = *(arg1 + 0x6b8) & 1
int128_t zmm6_1 = sub_14085bac0(arg1, arg2.b)

if (i_2.d s> 0)
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int64_t* rbx_2 = nullptr
        int64_t* arg_20 = nullptr
        int64_t rdx_1
        int512_t zmm1_1
        rdx_1, zmm1_1 = sub_140b33630("Niagara")
        
        if (*(arg1 + 0x6e8) != 4)
            int64_t* rbx_1 = *(arg1 + 0x20)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            zmm1_1.o = zmm6_1
            zmm6_1 = sub_14085fa90(*(arg1 + 0x18), rdx_1, &arg_20)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_5 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_5 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rbx_2 = arg_20
        
        sub_140b37f60("Niagara")
        
        if (rbx_2 != 0)
            rbx_2[9].d -= 1
            
            if (rbx_2[9].d == 1)
                zmm6_1 = sub_140a2f6e0(arg_20)
        
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_14085bac0(arg1, r14_1)
