// 函数: sub_141b49b70
// 地址: 0x141b49b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ddab60(arg1, arg2)
int64_t* r9 = &arg1[0x19]
*arg1 = &data_14306c580
void* r14 = &arg1[0x2b]
arg1[0x17] = 0
void* rdi = r14 + 0x1c
arg1[0x18] = 0
int64_t i = 3
r9[2] = 0
r9[3].d = 0
*(r9 + 0x1c) = 0x80
int64_t* rax = r9[2]

if (rax != 0)
    r9 = rax

*r9 = 0
r9[1] = 0
arg1[0x1d].d = 0xffffffff
*(arg1 + 0xec) = 0
arg1[0x1f] = 0
arg1[0x20].d = 0
arg1[0x2a] = 0

do
    i -= 1
    *r14 = &data_142d44d70
    *(rdi - 0x14) = 0
    
    if (data_143de5432 == 0)
        void* rcx = data_143e1a338
        
        if (rcx == 0)
            void* rax_1 = sub_140cde0b0()
            sub_140d19010(rax_1, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            int32_t arg_8 = 0
            int64_t arg_10 = 0
            void* rax_3 = sub_140d2dfc0(sub_140baa6d0(), rax_1, 0, 0, 0, 0, 0, 0, 0)
            data_143e1a338 = rax_3
            int32_t rcx_3 = *(rax_3 + 0xc)
            void* const rax_7
            
            if (rcx_3 s>= data_143e1d9b4)
                rax_7 = nullptr
            else
                uint32_t rax_4 = zx.d(rcx_3.w)
                
                if (rcx_3 s< 0)
                    rcx_3 += 0xffff
                    rax_4 -= 0x10000
                
                rax_7 = *(data_143e1d9a0 + (sx.q(rcx_3 s>> 0x10) << 3)) + sx.q(rax_4) * 0x18
            
            *(rax_7 + 8) |= 0x40000000
            rcx = data_143e1a338
        
        sub_140b9aa70(rcx, r14)
        *(rdi - 0x14) = 1
    
    *r14 = &data_142ec98d8
    r14 += 0x40
    *(rdi - 0xc) = 0
    *(rdi - 4) = 0
    __builtin_memset(rdi + 4, 0, 0x18)
    rdi += 0x40
while (i != 0)

arg1[0x43].b = 0
__builtin_memset(&arg1[0x44], 0, 0x60)
arg1[0x5c] = 0
arg1[0x5d].d = 0
*(arg1 + 0x2ec) = 2
*(arg1 + 0x2f4) = 0
*(arg1 + 0x2fc) = 0
arg1[0x66] = 0
arg1[0x67].d = 0
*(arg1 + 0x33c) = 4
arg1[0x68].d = 0xffffffff
*(arg1 + 0x344) = 0
int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d += 1

void var_48

if (&arg1[0x45] == &var_48)
label_141b49e29:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    arg1[0x45] = *arg3
    int64_t* rdi_1 = arg1[0x46]
    
    if (rbx_2 == rdi_1)
        goto label_141b49e29
    
    arg1[0x46] = rbx_2
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp6_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

__builtin_memcpy(&arg1[0x22], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x40)
arg1[0x5e].b = 0
arg1[0x61] = 0
int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = arg3[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp7_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

return arg1
