// 函数: sub_140bd2050
// 地址: 0x140bd2050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d30b50()
void*** rax = sub_140a84c80(0, 0x20, 0)

if (rax != 0)
    *rax = &data_142d40dc0
    rax[1] = sub_140cdfd40
    rax[3] = sub_140a387b0()
    *rax = &data_142d40e18

if (rax != 0)
    if (data_14399fc9c s<= 0)
        int32_t rdx_1 = data_14399fc90
        int32_t rax_3 = data_14399fc98 - 1
        data_14399fc98 = rax_3
        
        if (rax_3 s<= rdx_1)
            int32_t rbx_1 = 0
            int32_t rbp_1 = rdx_1
            
            if (rdx_1 s> 0)
                int64_t* rdi_1 = nullptr
                
                do
                    int64_t rax_4 = data_14399fc88
                    
                    if (*(rdi_1 + rax_4 + 8) == 0)
                        sub_1405a4880(&data_14399fc88, rbx_1, 1, 1)
                    else
                        int64_t* rcx_1 = *(rdi_1 + rax_4)
                        
                        if (rcx_1 == 0)
                            sub_1405a4880(&data_14399fc88, rbx_1, 1, 1)
                        else if ((*(*rcx_1 + 0x20))(rcx_1) != 0)
                            sub_1405a4880(&data_14399fc88, rbx_1, 1, 1)
                        else
                            rbx_1 += 1
                            rdi_1 = &rdi_1[2]
                    
                    rdx_1 = data_14399fc90
                while (rbx_1 s< rdx_1)
            
            int32_t rax_7 = rdx_1 * 2
            
            if (rax_7 s<= 2)
                rax_7 = 2
            
            data_14399fc98 = rax_7
            
            if (rbp_1 s> rax_7 && data_14399fc94 != rdx_1)
                sub_1405a5410(&data_14399fc88, rdx_1)
    
    void arg_10
    (*rax)[6](rax, &arg_10)
    int64_t rbx_2 = sx.q(data_14399fc90)
    int32_t rax_9 = (rbx_2 + 1).d
    bool cond:1_1 = rax_9 s<= data_14399fc94
    data_14399fc90 = rax_9
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_14399fc88)
    
    void**** rax_12 = (rbx_2 << 4) + data_14399fc88
    *rax_12 = rax
    rax_12[1].d = 2

data_14399ea98 = sub_140bc94e0
data_14399fa10 = sub_140bc9260
data_14399fa18 = sub_140bd1aa0
data_14399fa20 = sub_140bcf2e0
data_14399fa28 = sub_140bc92d0
data_14399fa30 = &data_140bc9280
return sub_140ba2a60() __tailcall
