// 函数: sub_140e7a240
// 地址: 0x140e7a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* rcx = arg1[4]
int32_t var_1b0 = 0
CRITICAL_SECTION* lpCriticalSection = (*(*rcx + 0x138))(rcx)
EnterCriticalSection(lpCriticalSection)
char var_218 = 0
char* var_208 = &var_218
void*** (* var_210)() = j_sub_140597fc0
int64_t* rax_4 = sub_140a756e0(&var_210, &data_143958018) + 0x10
int64_t* var_1d8 = rax_4
int64_t rcx_3 = *rax_4
int64_t rcx_4 = rax_4[2]
char var_1c0 = 0
int64_t result_1 = rax_4[3]
rax_4[3] = &var_1d8
int64_t* rax_5 = var_1d8
rax_5[4].d += 1
void var_1a8
sub_140d947e0(&var_1a8)
var_210 = *arg2
void* rax_7 = arg2[1]
void* var_208_1 = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

sub_140e5fd30(arg1, &var_210)
int64_t* rcx_7 = arg1[4]
void* rax_9 = (*(*rcx_7 + 8))(rcx_7)
bool cond:0 = arg1[0x37].d s<= 0
void* var_1e8 = rax_9
void* var_1e0 = &var_1a8
int64_t* rdi_1
int64_t* r12
void*** (* r13)()
int64_t* r14
int32_t r15

if (cond:0)
    rdi_1 = arg2
    r14 = nullptr
    r13 = nullptr
    r15 = 2
    r12 = nullptr
else
    int64_t rax_10 = arg1[0x36]
    int64_t rcx_9 = sx.q(arg1[0x37].d) * 2
    rdi_1 = *(rax_10 + (rcx_9 << 3) - 8)
    r13 = *(rax_10 + (rcx_9 << 3) - 0x10)
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    r14 = arg2
    r15 = 1
    r12 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1

if ((r15.b & 2) != 0)
    r15 &= 0xfffffffd
    
    if (r14 != 0)
        r14[1].d -= 1
        
        if (r14[1].d == 1)
            (**r14)(r14)
            int32_t temp2_1 = *(r14 + 0xc)
            *(r14 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*r14 + 8))(r14, 1)

if ((r15.b & 1) != 0 && rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* r15_3
void* const var_1f8

if (r13 == 0)
    r15_3 = arg2
    void*** (* rax_31)() = *r15_3
    
    if (rax_31 == 0)
        for (int32_t i = 0; i s>= 0; i += 1)
            if (i s>= arg1[0x31].d)
                break
            
            void** rax_37 = (sx.q(i) << 4) + arg1[0x30]
            void* const rdx_14 = *rax_37
            var_1f8 = rdx_14
            int64_t* rcx_43 = rax_37[1]
            
            if (rcx_43 != 0)
                rcx_43[1].d += 1
                rdx_14 = var_1f8
            
            char rax_38
            
            if (*(arg1 + 0x172) == 0)
                rax_38 = sub_140e1acc0(rdx_14)
            
            if (*(arg1 + 0x172) != 0 || rax_38 != 0)
                sub_140e60070(arg1, &var_1f8, &var_1e8)
            
            if (rcx_43 != 0)
                rcx_43[1].d -= 1
                
                if (rcx_43[1].d == 1)
                    (**rcx_43)(rcx_43)
                    int32_t temp14_1 = *(rcx_43 + 0xc)
                    *(rcx_43 + 0xc) -= 1
                    
                    if (temp14_1 == 1)
                        (*(*rcx_43 + 8))(rcx_43, 1)
    else
        var_210 = rax_31
        int64_t* rax_32 = r15_3[1]
        
        if (rax_32 != 0)
            rax_32[1].d += 1
        
        sub_140e60070(arg1, &var_210, &var_1e8)
        
        if (rax_32 != 0)
            rax_32[1].d -= 1
            
            if (rax_32[1].d == 1)
                (**rax_32)(rax_32)
                int32_t temp8_1 = *(rax_32 + 0xc)
                *(rax_32 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rax_32 + 8))(rax_32, 1)
else
    var_210 = r13
    
    if (r12 != 0)
        r12[1].d += 1
    
    sub_140e60070(arg1, &var_210, &var_1e8)
    
    if (r12 != 0)
        r12[1].d -= 1
        
        if (r12[1].d == 1)
            (**r12)(r12)
            int32_t temp6_1 = *(r12 + 0xc)
            *(r12 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*r12 + 8))(r12, 1)
    
    for (int32_t i_1 = 0; i_1 s>= 0; i_1 += 1)
        if (i_1 s>= arg1[0x31].d)
            break
        
        int64_t* rdx_4 = (sx.q(i_1) << 4) + arg1[0x30]
        
        if (*(*rdx_4 + 0x734) == 2)
            sub_140e60070(arg1, rdx_4, &var_1e8)
    
    var_1f8 = nullptr
    int32_t i_4 = 0
    sub_140f05600(sub_140eff820(), &var_1f8)
    int32_t rdi_3 = 0
    int32_t i_3
    
    while (true)
        i_3 = i_4
        
        if (rdi_3 s< 0)
            break
        
        if (rdi_3 s>= i_3)
            break
        
        sub_140e60070(arg1, (sx.q(rdi_3) << 4) + var_1f8, &var_1e8)
        rdi_3 += 1
    
    if (i_3 != 0)
        int64_t* r15_2 = var_1f8 + 8
        int32_t i_2
        
        do
            int64_t* rdi_4 = *r15_2
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t temp18_1 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (temp18_1 == 1)
                        (*(*rdi_4 + 8))(rdi_4, 1)
            
            r15_2 = &r15_2[2]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    void* const rcx_22 = var_1f8
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    r15_3 = arg2

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        (**r12)(r12)
        int32_t temp9_1 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*r12 + 8))(r12, 1)

if (sub_140a80f80() == 0)
    sub_140e64640(&var_210, &arg1[0x30])
    sub_140e216b0(var_1e8, &var_210)
    void*** (* rcx_27)() = var_210
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)

int64_t* rcx_28 = arg1[4]
(*(*rcx_28 + 0x48))(rcx_28, var_1e8)
void var_58
sub_140596d80(&var_58)
int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp11_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

void var_1a0
int64_t result = sub_140d94d20(&var_1a0)

if (var_1c0 == 0)
    int64_t* rax_27 = var_1d8
    char var_1c0_1 = 1
    rax_27[4].d -= 1
    int64_t* rcx_33 = var_1d8
    
    if (rcx_4 != rcx_33[2])
        sub_140b16b40(rcx_33, rcx_4)
        rcx_33 = var_1d8
    
    *rcx_33 = rcx_3
    result = result_1
    var_1d8[3] = result
    int64_t var_1d0_1 = 0

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

int64_t* rbx_1 = r15_3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp17_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp17_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(rax_1 ^ &var_238)
return result
