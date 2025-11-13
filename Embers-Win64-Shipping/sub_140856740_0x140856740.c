// 函数: sub_140856740
// 地址: 0x140856740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t rbx = arg4
arg4.b = 1
int64_t* r12 = arg6
*(arg1 + 0x10) = arg2
int64_t* var_70 = r12
NMT::reload(arg1 + 0x58, arg2, arg3, arg4.b)
void* rsi = arg1 + 0x200
*(arg1 + 0x1f4) = rbx
*(arg1 + 0x1f8) = arg5
sub_14084eee0(rsi, 0)
sub_140841290(rsi, r12)
uint64_t rax_3 = *(arg1 + 0x10)

if (rax_3 == 0 || ((*(rax_3 + 0x204) u>> 1).b & 1) == 0)
    rax_3.b = 0
else
    rax_3.b = 1

*(arg1 + 0x250) = rax_3.b

if (arg2 != 0 && *(arg2 + 0x4e8) != 0 && *(arg2 + 0x4f8) s> 0)
    void* rax_5 = arg2 + 0x4f0
    void* var_88 = rax_5
    
    if (arg1 + 0x260 != rax_5)
        int32_t i_6 = *(arg1 + 0x268)
        
        if (i_6 != 0)
            int64_t* rbx_2 = *(arg1 + 0x260) + 0x10
            int32_t i
            
            do
                int64_t rcx_3 = *rbx_2
                
                if (rcx_3 != 0)
                    sub_140a74f90(rcx_3)
                
                rbx_2 = &rbx_2[5]
                i = i_6
                i_6 -= 1
            while (i != 1)
            rax_5 = var_88
        
        int32_t i_5 = *(rax_5 + 8)
        void* rdi_1 = *rax_5
        int32_t r8 = *(arg1 + 0x26c)
        *(arg1 + 0x268) = i_5
        
        if (i_5 != 0 || r8 != 0)
            sub_1407751d0(arg1 + 0x260, i_5, r8)
            void* rbx_3 = *(arg1 + 0x260)
            
            if (i_5 != 0)
                void* rdi_2 = rdi_1 + 8
                int32_t i_1
                
                do
                    *rbx_3 = *(rdi_2 - 8)
                    *(rbx_3 + 8) ^= (*(rbx_3 + 8) ^ *rdi_2) & 1
                    *(rbx_3 + 8) ^= (*(rbx_3 + 8) ^ *rdi_2) & 2
                    *(rbx_3 + 0x10) = 0
                    int64_t r12_1 = sx.q(*(rdi_2 + 0x10))
                    var_88 = *(rdi_2 + 8)
                    *(rbx_3 + 0x18) = r12_1.d
                    
                    if (r12_1.d != 0)
                        sub_1405c4a00(rbx_3 + 0x10, r12_1.d, 0)
                        memcpy(*(rbx_3 + 0x10), var_88, (r12_1 << 3).d)
                    else
                        *(rbx_3 + 0x1c) = 0
                    
                    *(rbx_3 + 0x20) = *(rdi_2 + 0x18)
                    int32_t rax_11 = *(rdi_2 + 0x1c)
                    rdi_2 += 0x28
                    *(rbx_3 + 0x24) = rax_11
                    rbx_3 += 0x28
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                r12 = var_70
        else
            *(arg1 + 0x26c) = i_5
        
        rsi = arg1 + 0x200
    
    *(arg1 + 0x1f8) = *(*(arg1 + 0x260) + sx.q(*(arg1 + 0x268)) * 0x28 - 4)
    sub_14084eee0(rsi, 0)
    int32_t i_2 = 0
    
    if (*(arg1 + 0x268) s> 0)
        int64_t rbx_4 = 0
        
        do
            int64_t rax_14 = *(arg1 + 0x260)
            
            if ((*(rbx_4 + rax_14 + 8) & 1) != 0)
                int32_t var_78 = *(rbx_4 + rax_14 + 0x20)
                sub_1406f3d50(rsi, &var_88, &var_78, nullptr)
            
            i_2 += 1
            rbx_4 += 0x28
        while (i_2 s< *(arg1 + 0x268))
    
    int32_t rdx_5 = *(arg1 + 0x70)
    void* r14_2 = nullptr
    var_88 = nullptr
    int32_t i_4 = 0
    int64_t var_80_1 = 0
    
    if (rdx_5 s> 0)
        sub_1405c5660(&var_88, rdx_5)
        i_4 = var_80_1.d
        r14_2 = var_88
    
    int64_t* rdi_3 = *(arg1 + 0x68)
    void* r15_3 = &rdi_3[sx.q(*(arg1 + 0x70)) * 4]
    
    if (rdi_3 != r15_3)
        do
            int64_t var_68 = *rdi_3
            int64_t i_7 = sx.q(i_4)
            int64_t var_60_1 = rdi_3[1]
            int16_t var_58_1 = rdi_3[2].w
            i_4 = (i_7 + 1).d
            int32_t var_56_1 = 0xffffffff
            int64_t var_50_1 = 0
            int64_t var_48_1 = 0
            var_80_1.d = i_4
            
            if (i_4 s> var_80_1:4.d)
                sub_1405c4ec0(&var_88)
                i_4 = var_80_1.d
                r14_2 = var_88
            
            sub_140745220(r14_2 + i_7 * 0x28, &var_68)
            
            if (var_50_1 != 0)
                sub_140a74f90(var_50_1)
            
            rdi_3 = &rdi_3[4]
        while (rdi_3 != r15_3)
        
        r12 = var_70
    
    void* rdi_4 = r14_2
    void* rsi_1 = r14_2 + sx.q(i_4) * 0x28
    
    if (r14_2 != rsi_1)
        do
            if (sub_140834780(rdi_4 + 8) != 0)
                int32_t* rax_22 = (*(*(arg1 + 0x58) + 0x30))(arg1 + 0x58, rdi_4)
                
                if (rax_22 != 0)
                    int64_t rax_23 = sx.q(*rax_22)
                    
                    if (rax_23.d s>= 0 && rax_23.d s< *(arg1 + 0x90))
                        void* rcx_24 = *(*(arg1 + 0x88) + (rax_23 << 3))
                        
                        if (rcx_24 != 0)
                            void* rcx_25 = *(rcx_24 + 0x28)
                            
                            if (rcx_25 != 0)
                                *(rcx_25 + 0x18) = *rdi_4
            
            rdi_4 += 0x28
        while (rdi_4 != rsi_1)
    
    if (i_4 != 0)
        void* rdi_5 = r14_2 + 0x18
        int32_t i_3
        
        do
            int64_t rcx_26 = *rdi_5
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            rdi_5 += 0x28
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
    
    if (r14_2 != 0)
        sub_140a74f90(r14_2)

r12[9].d = 0
int64_t rcx_28 = r12[8]

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

r12[1].d = 0

if (*(r12 + 0xc) != 0)
    sub_140638cc0(r12, 0)

r12[6].d = 0xffffffff
*(r12 + 0x34) = 0
void* result = sub_14059a8e0(&r12[2], 0)
int64_t rcx_31 = r12[4]

if (rcx_31 != 0)
    result = sub_140a74f90(rcx_31)

int64_t rcx_32 = *r12

if (rcx_32 != 0)
    result = sub_140a74f90(rcx_32)

__security_check_cookie(rax_1 ^ &var_a8)
return result
