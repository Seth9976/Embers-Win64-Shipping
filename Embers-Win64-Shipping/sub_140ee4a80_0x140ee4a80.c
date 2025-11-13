// 函数: sub_140ee4a80
// 地址: 0x140ee4a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_48 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_48 != arg1)
    var_48.o = *arg1
    *arg1 = var_48.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[3]
var_48 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_48 != &arg1[1])
    var_48.o = arg1[1]
    arg1[1] = var_48.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

arg1[2].b = arg2[4].b

if (arg1 + 0x28 != &arg2[5])
    int32_t i_3 = arg1[3].d
    
    if (i_3 != 0)
        void* rdi_2 = *(arg1 + 0x28) + 0x10
        int32_t i
        
        do
            int64_t rcx_5 = *(rdi_2 + 0x10)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = *rdi_2
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t* rbx_2 = *(rdi_2 - 8)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp11_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_2 += 0x30
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    sub_140edf8c0(arg1 + 0x28, arg2[5], arg2[6].d, *(arg1 + 0x34), 0)

if (arg1 + 0x38 != &arg2[7])
    int64_t rdi_3 = sx.q(arg2[8].d)
    int64_t rsi_1 = arg2[7]
    int32_t r8_2 = *(arg1 + 0x44)
    arg1[4].d = rdi_3.d
    
    if (rdi_3.d != 0 || r8_2 != 0)
        sub_1407751d0(arg1 + 0x38, rdi_3.d, r8_2)
        memcpy(*(arg1 + 0x38), rsi_1, (rdi_3 * 0x28).d)
    else
        *(arg1 + 0x44) = 0

if (arg1 + 0x48 != &arg2[9])
    int32_t i_4 = arg1[5].d
    
    if (i_4 != 0)
        int64_t* rdi_5 = *(arg1 + 0x48) + 0x18
        int32_t i_1
        
        do
            int64_t* rbx_4 = *rdi_5
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp10_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            rdi_5 = &rdi_5[4]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    sub_140edf810(arg1 + 0x48, arg2[9], arg2[0xa].d, *(arg1 + 0x54), 0)

if (arg1 + 0x58 != &arg2[0xb])
    int32_t i_5 = arg1[6].d
    
    if (i_5 != 0)
        int64_t* rdi_7 = *(arg1 + 0x58) + 0x18
        int32_t i_2
        
        do
            int64_t* rbx_5 = *rdi_7
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp12_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
            
            rdi_7 = &rdi_7[4]
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    sub_140edf660(arg1 + 0x58, arg2[0xb], arg2[0xc].d, *(arg1 + 0x64), 0)

*(arg1 + 0x68) = arg2[0xd].b
return arg1
