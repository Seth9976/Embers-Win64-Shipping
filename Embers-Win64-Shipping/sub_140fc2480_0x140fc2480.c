// 函数: sub_140fc2480
// 地址: 0x140fc2480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int32_t rsi = -1

if (rbx != 0)
    rbx[1].d += 1

for (int64_t* i = *(arg1 + 0x10); i != &i[sx.q(*(arg1 + 0x18)) * 2]; i = &i[2])
    if (**i == *arg2)
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp5_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
        
        int64_t* r8_3 = *(arg1 + 0x10)
        int64_t* rax_7 = r8_3
        void* rcx_11 = &r8_3[sx.q(*(arg1 + 0x18)) * 2]
        
        if (r8_3 != rcx_11)
            do
                if (*rax_7 == *i)
                    rsi = ((rax_7 - r8_3) s>> 4).d
                    break
                
                rax_7 = &rax_7[2]
            while (rax_7 != rcx_11)
        
        sub_140dbae50(arg1 + 0x10, rsi, 1, 1)
        sub_140599090(arg1 + 0x20)
        goto label_140fc24fe

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

label_140fc24fe:
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            int64_t r8_2 = *rbx_1
            (*(r8_2 + 8))(rbx_1, 1, r8_2)

return zx.q(rsi)
