// 函数: sub_140fc6240
// 地址: 0x140fc6240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int16_t var_148
memset(&var_148, 0, 0x80)
int16_t* r8 = *arg3
int64_t r9 = sx.q(arg3[1].d)
int16_t* rax_2 = r8
void* rdx = &r8[r9]
int32_t rax_3

if (r8 == rdx)
label_140fc62a3:
    rax_3 = -1
else
    while (*rax_2 != 0x3a)
        rax_2 = &rax_2[1]
        
        if (rax_2 == rdx)
            goto label_140fc62a3
    
    rax_3 = ((rax_2 - r8) s>> 1).d

void var_144
void* pAddrBuf = &var_144
int16_t* const rdx_1 = &data_142d40450
int32_t Family = 0x17

if (rax_3 == 0xffffffff)
    Family = 2

void var_140

if (rax_3 != 0xffffffff)
    pAddrBuf = &var_140
var_148 = Family.w

if (r9.d != 0)
    rdx_1 = r8

void var_c8
sub_1408f2b40(&var_c8, rdx_1)
PSTR pszAddrString
int32_t rax_4 = inet_pton(Family, pszAddrString, pAddrBuf)
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t rax_5 = *arg1

if (rax_4 == 0)
    (*(rax_5 + 0xb8))(arg1)
    *arg2 = nullptr
    arg2[1] = 0
else
    void var_158
    int64_t* rax_6 = (*(rax_5 + 0x90))(arg1, &var_158)
    int64_t* rbx_2 = rax_6[1]
    int64_t* r14_1 = *rax_6
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t* var_150
    
    if (var_150 != 0)
        var_150[1].d -= 1
        
        if (var_150[1].d == 1)
            (**var_150)(var_150)
            int32_t temp1_1 = *(var_150 + 0xc)
            *(var_150 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_150 + 8))(var_150, 1)
    
    (*(*r14_1 + 0xc0))(r14_1, &var_148)
    *arg2 = r14_1
    arg2[1] = rbx_2
    
    if (rbx_2 != 0)
        int32_t rax_10 = rbx_2[1].d
        rbx_2[1].d = rax_10
        
        if (rax_10 == 0)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                int64_t r8_3 = *rbx_2
                (*(r8_3 + 8))(rbx_2, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_178)
return arg2
