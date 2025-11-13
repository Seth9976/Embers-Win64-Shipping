// 函数: sub_14177eb10
// 地址: 0x14177eb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax

if ((arg1[5].b & 1) == 0)
    rax = *(arg2 + 0xc8)
else
    rax = 0

int64_t* rcx = arg1[1]
char arg_8 = rax
char* rdx = *rcx

if (&rdx[1] u> rcx[1])
    (*(*arg1 + 0x150))(arg1, &arg_8, 1)
else
    arg_8 = *rdx
    *rcx += 1

uint32_t rcx_2 = zx.d(arg_8)

if (rcx_2 == 0)
    if ((arg1[5].b & 1) != 0)
        void*** rax_10 = j_sub_140a82f30(0xd0)
        
        if (rax_10 != 0)
            return sub_141760860(rax_10)
else if (rcx_2 == 1)
    if ((arg1[5].b & 1) != 0)
        void*** rax_8 = j_sub_140a82f30(0x110)
        
        if (rax_8 != 0)
            return sub_141760c20(rax_8)
else
    int16_t arg_18
    char arg_1a
    
    if (rcx_2 == 2)
        if ((arg1[5].b & 1) != 0)
            void*** rax_6 = j_sub_140a82f30(0x230)
            
            if (rax_6 == 0)
                return 0
            
            arg_18 = 0
            arg_1a = 0
            sub_141760c20(rax_6)
            *rax_6 = &data_142fc6e40
            rax_6[0x40] = 0
            *(rax_6 + 0x225) = 0
            rax_6[0x19].b = 2
            rax_6[0x43].d = 0xffffffff
            *(rax_6 + 0x222) = 0
            sub_14175e650(rax_6, &arg_18)
            return rax_6
    else if (rcx_2 == 6 && (arg1[5].b & 1) != 0)
        void*** rax_4 = j_sub_140a82f30(0x230)
        
        if (rax_4 == 0)
            return 0
        
        arg_18 = 0
        arg_1a = 0
        sub_141760c20(rax_4)
        *rax_4 = &data_142fc6e40
        rax_4[0x40] = 0
        *(rax_4 + 0x225) = 0
        rax_4[0x19].b = 2
        rax_4[0x43].d = 0xffffffff
        *(rax_4 + 0x222) = 0
        sub_14175e650(rax_4, &arg_18)
        rax_4[0x19].b = 6
        *rax_4 = &data_142fc6e40
        return rax_4

return 0
