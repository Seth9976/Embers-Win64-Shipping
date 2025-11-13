// 函数: sub_140a99420
// 地址: 0x140a99420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0xd]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

if (arg1[0xb].b != 0)
    arg1[0xb].b = 0

if (arg1[7].b != 0)
    arg1[7].b = 0
    int64_t* rdi_1 = arg1[5]
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rsi_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

*arg1 = &data_142e63698
return &data_142e63698
