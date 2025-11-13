// 函数: sub_1413cc150
// 地址: 0x1413cc150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg1[2].d
int64_t* rdi = arg1[1]

if (i_2 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_2
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_2 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                    (**rbx_1)(rbx_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_4 = sub_140a20af0()
                        uint64_t rdx = zx.q(rax_4)
                        void* const rax_5
                        
                        if (rax_4 != 0)
                            rax_5 = *(&data_143cf0bf8 + (rdx u>> 0xe << 3))
                                + (zx.q(rdx.d) & 0x3fff) * 0x18
                        else
                            rax_5 = nullptr
                        
                        *(rax_5 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rdx.d)
        
        rdi = &rdi[4]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rdi = arg1[1]

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t* rsi = *arg1

if (rsi != 0)
    int32_t i_3 = rsi[1].d
    void* rbx_2 = *rsi
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            sub_14125cf90(rbx_2)
            rbx_2 += 0xa0
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_2 = *rsi
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    j_sub_140a74f90(rsi)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
