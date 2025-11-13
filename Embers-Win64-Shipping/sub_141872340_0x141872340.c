// 函数: sub_141872340
// 地址: 0x141872340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void** var_158
sub_141853be0(&var_158, arg1[1])
void* i_4
void* i = i_4
uint64_t var_118 = 0
int64_t var_110
__builtin_memset(&var_110, 0, 0x24)
int32_t var_ec = 0x80
int32_t var_e8 = 0xffffffff
int32_t var_e4 = 0
int64_t var_d8 = 0
int32_t var_d0 = 0

for (; i != 0; i = *(i + 0x38))
    for (void* j = *(i + 0x20); j != 0; j = *(j + 0x28))
        int64_t* rcx_1 = *arg1
        
        if ((*(*rcx_1 + 0x1e8))(rcx_1, j + 0x10) == 0)
            *(j + 0x18) = 0
            *(j + 0x10) = 0

void* var_1c0 = nullptr
int32_t var_1b8 = 0
void var_1b0
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_1b0)
int64_t i_3
int64_t var_178[0x2]

while (true)
    void* r14 = *arg1[0xb]
    
    if (r14 == 0)
        bool z_1
        
        if (0 == arg1[6].d)
            arg1[6].d = 0
            z_1 = true
        else
            arg1[6].d
            z_1 = false
        
        if (z_1)
            break
        
        int64_t* rcx_19 = arg1[7]
        (*(*rcx_19 + 0x20))(rcx_19, 0x3e8, 0)
        int64_t* rcx_20 = arg1[7]
        (*(*rcx_20 + 0x18))(rcx_20)
    else
        if (&var_1c0 != r14 + 8)
            void* rcx_3 = var_1c0
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            var_1c0 = *(r14 + 8)
            *(r14 + 8) = 0
            var_1b8 = *(r14 + 0x10)
            var_1b8 = *(r14 + 0x14)
            *(r14 + 0x10) = 0
        
        sub_141823dd0(&var_1b0, r14 + 0x18)
        void* rdi_1 = arg1[0xb]
        arg1[0xb] = r14
        int64_t var_1e0
        __builtin_memset(&var_1e0, 0, 0x20)
        int128_t var_1d0
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_1d0)
        int64_t* rbx_3 = arg1[0xb] + 8
        
        if (rbx_3 != &var_1e0)
            int64_t rcx_6 = *rbx_3
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            *rbx_3 = var_1e0
            var_1e0 = 0
            int64_t var_1d8_1
            rbx_3[1].d = var_1d8_1.d
            *(rbx_3 + 0xc) = var_1d8_1:4.d
            int64_t var_1d8_2 = 0
        
        sub_141823dd0(&rbx_3[2], &var_1d0)
        sub_1418221b0(&var_1d0)
        int64_t rcx_9 = var_1e0
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        if (rdi_1 != 0)
            sub_1418221b0(rdi_1 + 0x18)
            int64_t rcx_11 = *(rdi_1 + 8)
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            j_sub_140a74f90(rdi_1)
        
        void* rbx_4 = var_1c0
        int64_t rdi_2 = 0
        void* r14_1 = rbx_4 + sx.q(var_1b8) * 0x18
        
        if (rbx_4 != r14_1)
            do
                pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_178)
                sub_14184deb0(&var_1b0, rdi_2, zx.q(*(rbx_4 + 0x14)), &var_178)
                void* var_198_1 = rbx_4
                i_3 = 0
                int64_t* var_90_1 = &i_3
                void*** var_b8_1 = nullptr
                int128_t var_a0_1 = (&var_118).o
                void** const var_a8 = &data_142e345d8
                int64_t (* var_c8)(int64_t** arg1, uint128_t* arg2, int64_t* arg3, int64_t* arg4) =
                    sub_14187b000
                sub_141884840(&var_158, &var_178, &var_c8)
                
                if (var_c8 != 0)
                    void** const* rcx_17 = &var_a8
                    
                    if (var_b8_1 != 0)
                        rcx_17 = var_b8_1
                    
                    (*rcx_17)[2](rcx_17)
                
                rdi_2 += zx.q(*(rbx_4 + 0x14))
                sub_1418221b0(&var_178)
                rbx_4 += 0x18
            while (rbx_4 != r14_1)

int64_t r13 = 0
int64_t* result = arg2
int64_t var_188 = 0
int64_t i_1 = arg1[4]
int64_t rax_20 = (sx.q(arg1[5].d) << 4) + i_1
i_3 = i_1
var_178[0] = rax_20

if (i_1 != rax_20)
    do
        int64_t* rcx_21 = arg1[1]
        void* rax_22 = (*(*rcx_21 + 0x1c8))(rcx_21, i_1)
        int64_t rdx_8 = *(rax_22 + 0x58)
        
        if (rdx_8 != 0)
            void* rbx_5 = *(rax_22 + 0x48)
            void* r15 = rbx_5 + sx.q(*(rax_22 + 0x50)) * 0x18
            
            if (rbx_5 != r15)
                int64_t rdi_3 = r13
                
                do
                    int64_t* rcx_23 = *arg1
                    uint64_t r14_2 = zx.q(*(rbx_5 + 0x14))
                    
                    if ((*(*rcx_23 + 0x1e8))(rcx_23, rbx_5) != 0)
                        void var_128
                        int64_t* rax_26 = sub_14181d720(&var_128, rdi_3, zx.q(r14_2.d))
                        void* var_198_2 = rbx_5
                        int64_t var_168 = 0
                        void*** var_78_1 = nullptr
                        int64_t* var_50_1 = &var_168
                        int128_t var_60_1 = (&var_118).o
                        void** const var_68 = &data_142e345d8
                        int64_t (* var_88)(int64_t** arg1, uint128_t* arg2, int64_t* arg3, 
                            int64_t* arg4) = sub_14187b000
                        sub_141884840(&var_158, rax_26, &var_88)
                        
                        if (var_88 != 0)
                            void** const* rcx_26 = &var_68
                            
                            if (var_78_1 != 0)
                                rcx_26 = var_78_1
                            
                            (*rcx_26)[2](rcx_26)
                        
                        sub_1418221b0(&var_128)
                    
                    rdi_3 += r14_2
                    rbx_5 += 0x18
                while (rbx_5 != r15)
                
                i_1 = i_3
                r13 = var_188
        
        r13 += rdx_8
        i_1 += 0x10
        var_188 = r13
        i_3 = i_1
    while (i_1 != var_178[0])
    
    result = arg2

for (void* i_2 = i_4; i_2 != 0; i_2 = *(i_2 + 0x38))
    sub_14188c5a0(arg1, i_2 + 0x18)

sub_141878c70(&var_158, result)
sub_1418221b0(&var_1b0)
void* rcx_31 = var_1c0

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int32_t var_d0_1 = 0

if (var_d8 != 0)
    sub_140a74f90(var_d8)

var_110.d = 0
int32_t var_e8_1 = 0xffffffff
int32_t var_e4_1 = 0
int64_t var_108
sub_14059a8e0(&var_108, 0)
int64_t var_f8

if (var_f8 != 0)
    sub_140a74f90(var_f8)

uint64_t rcx_36 = var_118

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

sub_141865d40(&var_158)
__security_check_cookie(rax_1 ^ &var_208)
return result
