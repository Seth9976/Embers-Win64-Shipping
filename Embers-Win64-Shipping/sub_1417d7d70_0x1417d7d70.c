// 函数: sub_1417d7d70
// 地址: 0x1417d7d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143ef8a58
void* r8 = data_143ef8a50

if (rbx != 0)
    *(rbx + 0xc) += 1

int32_t rax_1
void* rdx

if (r8 != 0 && rbx != 0)
    rdx = nullptr
    rax_1 = 0
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
    else
        rax_1 = rbx[1].d

uint64_t rsi

if (r8 == 0 || rbx == 0 || rax_1 s<= 0)
    rsi.b = 0
else
    int32_t rax_2 = 0
    int64_t* rdi_1 = rbx
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax_2 = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_1417d7de8:
        rdi_1 = nullptr
    else
        while (true)
            bool z_2
            
            if (rax_2 == rbx[1].d)
                rbx[1].d = rax_2 + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                rdx = r8
                break
            
            rax_2 = 0
            bool z_3
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax_2 = rbx[1].d
                z_3 = false
            
            if (z_3)
                goto label_1417d7de8
    
    int64_t* rcx_1 = *(rdx + 0x50)
    
    if (rcx_1 == 0)
        rsi.b = 0
    else
        int32_t var_20_1 = arg2[1].d
        int32_t var_10_1 = arg1[1].d
        int64_t rax_6 = *rcx_1
        int64_t var_28 = *arg2
        int64_t zmm0 = *arg1
        int64_t var_18 = zmm0
        rsi = zx.q((*(rax_6 + 0xa0))(zmm0, &var_18, &var_28))
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_11 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_11 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx != 0)
    int32_t rbp_1 = *(rbx + 0xc)
    *(rbx + 0xc) -= 1
    
    if (rbp_1 == 1)
        int64_t r8_2 = *rbx
        (*(r8_2 + 8))(rbx, zx.q(rbp_1), r8_2)

return zx.q(rsi.b)
