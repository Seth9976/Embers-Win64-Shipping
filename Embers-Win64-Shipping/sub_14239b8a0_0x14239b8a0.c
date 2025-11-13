// 函数: sub_14239b8a0
// 地址: 0x14239b8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x12) != 0 || *(arg1 + 0x11) != 0 || *(arg1 + 0x15) == 0
        || *(arg1 + 0x64) + arg1[0xc].d s< arg1[0x10].d)
    return 

int64_t* rcx = arg1[0xf]
void* rdx
rdx.b = 1
uint64_t rax = 1
void* r8_3 = &rcx[sx.q(arg1[0x10].d) * 2]
int64_t var_18

if (rcx == r8_3)
label_14239b9f9:
    void* rcx_8 = arg1[0x13]
    
    if (rcx_8 != 0)
        int64_t* r8_6 = arg1[1]
        int64_t rdx_4 = 0
        
        if (r8_6 != 0)
            int32_t rax_6 = r8_6[1].d
            
            if (rax_6 != 0)
                r8_6[1].d = rax_6 + 1
                rax_6.b = 1
                rcx_8 = arg1[0x13]
            
            if (rax_6.b == 0)
                r8_6 = nullptr
            
            if (r8_6 != 0)
                rdx_4 = *arg1
        
        var_18 = rdx_4
        sub_140dba5f0(rcx_8 + 0xc0, &var_18)
        
        if (r8_6 != 0)
            r8_6[1].d -= 1
            
            if (r8_6[1].d == 1)
                (**r8_6)(r8_6)
                int32_t temp1_1 = *(r8_6 + 0xc)
                *(r8_6 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*r8_6 + 8))(r8_6, 1)
    
    sub_142386180(arg1, arg2)
else
    do
        if (rdx.b == 0)
            rdx.b = 0
        else
            rdx = *rcx
            
            if (*(rdx + 0x10) != 0 || *(rdx + 0x12) != 0)
                rdx.b = 1
            else
                rdx.b = 0
        
        if (rax.b == 0 || *(*rcx + 0x12) == 0)
            rax.b = 0
        else
            rax.b = 1
        
        if (rdx.b == 0 && rax.b == 0)
            return 
        
        rcx = &rcx[2]
    while (rcx != r8_3)
    
    if (rax.b != 0)
        goto label_14239b9f9
    
    if (rdx.b != 0)
        void* rcx_1 = arg1[0x13]
        
        if (rcx_1 != 0)
            int64_t* r8_4 = arg1[1]
            int64_t rdx_1 = 0
            
            if (r8_4 != 0)
                int32_t rax_2 = r8_4[1].d
                
                if (rax_2 != 0)
                    r8_4[1].d = rax_2 + 1
                    rax_2.b = 1
                    rcx_1 = arg1[0x13]
                
                if (rax_2.b == 0)
                    r8_4 = nullptr
                
                if (r8_4 != 0)
                    rdx_1 = *arg1
            
            var_18 = rdx_1
            sub_140dba5f0(rcx_1 + 0xc0, &var_18)
            
            if (r8_4 != 0)
                r8_4[1].d -= 1
                
                if (r8_4[1].d == 1)
                    (**r8_4)(r8_4)
                    int32_t temp3_1 = *(r8_4 + 0xc)
                    *(r8_4 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*r8_4 + 8))(r8_4, 1)
        
        int512_t zmm1
        rax, zmm1 = sub_142386b00(arg1)
        
        if (*(arg1 + 0x14) != 0)
            return sub_142394bf0(arg1, zmm1) __tailcall
