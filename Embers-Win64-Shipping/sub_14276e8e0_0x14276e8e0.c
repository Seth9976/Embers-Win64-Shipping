// 函数: sub_14276e8e0
// 地址: 0x14276e8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405c5510(arg2, 0)

if (data_143b6d9ec == 0 || arg1 == 0)
    return 

int64_t rbx_1 = *arg3
int32_t rdi_1 = arg3[1].d
char arg_10
char* var_70_1 = &arg_10
void*** (* var_78)() = j_sub_14274cb00
arg_10 = 0
void* rax_1 = sub_140a756e0(&var_78, &data_143b6e208)
uint64_t (* var_68)(char arg1, int64_t* arg2) = nullptr
int32_t var_60_1 = 0
int128_t zmm0_1 = var_68.o
void* var_58 = rax_1
int32_t var_40_1 = rdi_1
int32_t var_38_1 = 0
var_68.o = zmm0_1
sub_14276fa40(rax_1, 0, 0, 0, 0, 0, 0, &var_68, 0, 0)
sub_14276f970(var_58, arg1, 0, 0)
var_68 = sub_14276f7b0
var_60_1.q = sub_14276feb0

while (true)
    void* rdx_1 = var_58
    uint64_t (** rbx_2)(char arg1, int64_t* arg2) = &var_68
    int64_t i_2 = 2
    char* rax_2 = *(rdx_1 + 0x10)
    char r14_1 = *rax_2
    *(rdx_1 + 0x10) = &rax_2[1]
    char rax_4
    int64_t i
    
    do
        rax_4 = (*rbx_2)(zx.q(r14_1), &var_58)
        rbx_2 = &rbx_2[1]
        r14_1 = rax_4
        i = i_2
        i_2 -= 1
    while (i != 1)
    uint64_t rax_5 = zx.q(rax_4)
    
    if (rax_5.d u> 0x58)
        sub_140af98a0("Unknown", 0xc12, u"Unknown op code 0x%02x", zx.q(r14_1))
        sub_140afbb40()
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != 0)
            sub_1405c5510(arg2, 0)
        
        break
    
    int64_t (* rax_31)(void* arg1)
    int64_t rcx_154
    int64_t rbx_6
    
    switch (rax_5)
        case 1
            sub_1427665f0(&var_58)
        case 2
            sub_142767e50(&var_58)
        case 3
            sub_142767970(&var_58)
        case 4
            sub_142767150(&var_58)
        case 5
            void* rdx_3 = var_58
            char* rax_6 = *(rdx_3 + 0x10)
            uint64_t rcx_11 = zx.q(*rax_6)
            *(rdx_3 + 0x10) = &rax_6[1]
            
            if (rcx_11.d u<= 7)
                switch (rcx_11)
                    case 0
                        sub_14276a5f0(&var_58)
                    case 1
                        sub_14276aab0(&var_58)
                    case 2
                        sub_14276a850(&var_58)
                    case 3
                        sub_14276ad10(&var_58)
                    case 4
                        sub_14276a720(&var_58)
                    case 5
                        sub_14276abe0(&var_58)
                    case 6
                        sub_14276a980(&var_58)
                    case 7
                        sub_14276ae40(&var_58)
        case 6
            void* rdx_4 = var_58
            char* rax_8 = *(rdx_4 + 0x10)
            uint64_t rcx_22 = zx.q(*rax_8)
            *(rdx_4 + 0x10) = &rax_8[1]
            
            if (rcx_22.d u<= 7)
                switch (rcx_22)
                    case 0
                        sub_142769c70(&var_58)
                    case 1
                        sub_14276a130(&var_58)
                    case 2
                        sub_142769ed0(&var_58)
                    case 3
                        sub_14276a390(&var_58)
                    case 4
                        sub_142769da0(&var_58)
                    case 5
                        sub_14276a260(&var_58)
                    case 6
                        sub_14276a000(&var_58)
                    case 7
                        sub_14276a4c0(&var_58)
        case 7
            sub_14276d5a0(&var_58)
        case 8
            sub_14276d8d0(&var_58)
        case 9
            sub_14276dd10(&var_58)
        case 0xa
            sub_14276d380(&var_58)
        case 0xb
            sub_14276c280(&var_58)
        case 0xc
            sub_14276c8e0(&var_58)
        case 0xd
            sub_14276c7d0(&var_58)
        case 0xe
            sub_14276d160(&var_58)
        case 0xf
            sub_14276d050(&var_58)
        case 0x10
            sub_14276dc00(&var_58)
        case 0x11
            sub_14276c6c0(&var_58)
        case 0x12
            sub_14276e040(&var_58)
        case 0x13
            sub_14276c060(&var_58)
        case 0x14
            sub_14276bf50(&var_58)
        case 0x15
            sub_14276c170(&var_58)
        case 0x16
            sub_142766450(&var_58)
        case 0x17
            sub_14276c5b0(&var_58)
        case 0x18
            sub_14276cc10(&var_58)
        case 0x19
            sub_1427677d0(&var_58)
        case 0x1a
            sub_14276cd20(&var_58)
        case 0x1b
            sub_14276e150(&var_58)
        case 0x1c
            void* rdx_5 = var_58
            char* rax_10 = *(rdx_5 + 0x10)
            uint64_t rcx_55 = zx.q(*rax_10)
            *(rdx_5 + 0x10) = &rax_10[1]
            
            if (rcx_55.d u<= 7)
                switch (rcx_55)
                    case 0
                        sub_1427692f0(&var_58)
                    case 1
                        sub_1427697b0(&var_58)
                    case 2
                        sub_142769550(&var_58)
                    case 3
                        sub_142769a10(&var_58)
                    case 4
                        sub_142769420(&var_58)
                    case 5
                        sub_1427698e0(&var_58)
                    case 6
                        sub_142769680(&var_58)
                    case 7
                        sub_142769b40(&var_58)
        case 0x1d
            sub_142767630(&var_58)
        case 0x1e
            sub_142767490(&var_58)
        case 0x1f
            sub_142767b10(&var_58)
        case 0x20
            sub_14276d7c0(&var_58)
        case 0x21
            sub_14276daf0(&var_58)
        case 0x22
            sub_14276df30(&var_58)
        case 0x23
            sub_14276d490(&var_58)
        case 0x24
            sub_14276ba00(&var_58)
        case 0x25
            sub_142766e10(&var_58)
        case 0x26
            sub_142766c70(&var_58)
        case 0x27
            sub_142766ad0(&var_58)
        case 0x28
            sub_142766930(&var_58)
        case 0x29
            sub_142766790(&var_58)
        case 0x2a
            sub_142766fb0(&var_58)
        case 0x2b
            void* rdx_7 = var_58
            char* rax_14 = *(rdx_7 + 0x10)
            uint64_t rcx_91 = zx.q(*rax_14)
            *(rdx_7 + 0x10) = &rax_14[1]
            
            if (rcx_91.d u<= 7)
                switch (rcx_91)
                    case 0
                        sub_14276af70(&var_58)
                    case 1
                        sub_14276b430(&var_58)
                    case 2
                        sub_14276b1d0(&var_58)
                    case 3
                        sub_14276b690(&var_58)
                    case 4
                        sub_14276b0a0(&var_58)
                    case 5
                        sub_14276b560(&var_58)
                    case 6
                        sub_14276b300(&var_58)
                    case 7
                        sub_14276b7c0(&var_58)
        case 0x2c
            sub_1427648b0(&var_58)
        case 0x2d
            sub_1427662b0(&var_58)
        case 0x2e
            sub_142766110(&var_58)
        case 0x2f
            sub_142765c30(&var_58)
        case 0x30
            void* rdx_8 = var_58
            char* rax_16 = *(rdx_8 + 0x10)
            uint64_t rcx_106 = zx.q(*rax_16)
            *(rdx_8 + 0x10) = &rax_16[1]
            
            if (rcx_106.d u<= 7)
                switch (rcx_106)
                    case 0
                        sub_142768970(&var_58)
                    case 1
                        sub_142768e30(&var_58)
                    case 2
                        sub_142768bd0(&var_58)
                    case 3
                        sub_142769090(&var_58)
                    case 4
                        sub_142768aa0(&var_58)
                    case 5
                        sub_142768f60(&var_58)
                    case 6
                        sub_142768d00(&var_58)
                    case 7
                        sub_1427691c0(&var_58)
        case 0x31
            sub_142765f70(&var_58)
        case 0x32
            sub_142765dd0(&var_58)
        case 0x33
            sub_14276bb10(&var_58)
        case 0x34
            sub_14276bd30(&var_58)
        case 0x35
            sub_14276be40(&var_58)
        case 0x36
            sub_14276b8f0(&var_58)
        case 0x37
            sub_1427658f0(&var_58)
        case 0x38
            sub_142765750(&var_58)
        case 0x39
            sub_1427655b0(&var_58)
        case 0x3a
            sub_142765410(&var_58)
        case 0x3b
            sub_142765270(&var_58)
        case 0x3c
            sub_142765a90(&var_58)
        case 0x3d
            sub_142764a50(&var_58)
        case 0x3e
            sub_142764d90(&var_58)
        case 0x3f
            sub_1427650d0(&var_58)
        case 0x40
            sub_14276bc20(&var_58)
        case 0x41
            sub_142764bf0(&var_58)
        case 0x42
            sub_142764f30(&var_58)
        case 0x43
            sub_142764a50(&var_58)
        case 0x44
            sub_142764d90(&var_58)
        case 0x45
            sub_1427650d0(&var_58)
        case 0x46
            sub_14276bc20(&var_58)
        case 0x47
            sub_14276cb00(&var_58)
        case 0x48
            sub_14276cf40(&var_58)
        case 0x49
            sub_14276c9f0(&var_58)
        case 0x4a
            sub_14276c390(&var_58)
        case 0x4b
            sub_14276ce30(&var_58)
        case 0x4c
            sub_14276c4a0(&var_58)
        case 0x4d
            rbx_6 = sx.q(arg2[1].d)
            int32_t rax_29 = (rbx_6 + 8).d
            arg2[1].d = rax_29
            
            if (rax_29 s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
            
            rcx_154 = *arg2
            rax_31 = sub_14274d670
        label_14276f44b:
            *(rbx_6 + rcx_154) = rax_31
        label_14276f44f:
            void* rcx_170 = var_58
            int16_t* rax_52 = *(rcx_170 + 0x10)
            int16_t rdi_4 = *rax_52
            *(rcx_170 + 0x10) = &rax_52[1]
            int64_t rbx_11 = sx.q(arg2[1].d)
            int32_t rax_54 = (rbx_11 + 2).d
            arg2[1].d = rax_54
            
            if (rax_54 s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
            
            *(rbx_11 + *arg2) = rdi_4
            void* rcx_173 = var_58
            int16_t* rax_56 = *(rcx_173 + 0x10)
            int16_t rdi_5 = *rax_56
            *(rcx_173 + 0x10) = &rax_56[1]
            int64_t rbx_12 = sx.q(arg2[1].d)
            int32_t rax_58 = (rbx_12 + 2).d
            arg2[1].d = rax_58
            
            if (rax_58 s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
            
            *(rbx_12 + *arg2) = rdi_5
        label_14276f4bf:
            void* rcx_176 = var_58
            int16_t* rax_60 = *(rcx_176 + 0x10)
            int16_t rdi_6 = *rax_60
            *(rcx_176 + 0x10) = &rax_60[1]
            int64_t rbx_13 = sx.q(arg2[1].d)
            int32_t rax_62 = (rbx_13 + 2).d
            arg2[1].d = rax_62
            
            if (rax_62 s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
            
            *(rbx_13 + *arg2) = rdi_6
        case 0x4e
            rbx_6 = sx.q(arg2[1].d)
            int32_t rax_32 = (rbx_6 + 8).d
            arg2[1].d = rax_32
            
            if (rax_32 s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
            
            rcx_154 = *arg2
            rax_31 = sub_14274d6f0
            goto label_14276f44b
        case 0x4f
            void* rdx_9 = var_58
            char* rax_18 = *(rdx_9 + 0x10)
            uint32_t rcx_145 = zx.d(*rax_18)
            *(rdx_9 + 0x10) = &rax_18[1]
            
            if (rcx_145.b == 0)
                int64_t rbx_4 = sx.q(arg2[1].d)
                int32_t rax_23 = (rbx_4 + 8).d
                arg2[1].d = rax_23
                
                if (rax_23 s> *(arg2 + 0xc))
                    sub_1405daba0(arg2)
                
                *(rbx_4 + *arg2) = sub_14274a480
            else if (rcx_145 == 1)
                int64_t rbx_3 = sx.q(arg2[1].d)
                int32_t rax_21 = (rbx_3 + 8).d
                arg2[1].d = rax_21
                
                if (rax_21 s> *(arg2 + 0xc))
                    sub_1405daba0(arg2)
                
                *(rbx_3 + *arg2) = sub_14274a3a0
            
            void* rcx_150 = var_58
            int16_t* rax_25 = *(rcx_150 + 0x10)
            int16_t rdi_2 = *rax_25
            *(rcx_150 + 0x10) = &rax_25[1]
            int64_t rbx_5 = sx.q(arg2[1].d)
            int32_t rax_27 = (rbx_5 + 2).d
            arg2[1].d = rax_27
            
            if (rax_27 s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
            
            *(rbx_5 + *arg2) = rdi_2
            goto label_14276f44f
        case 0x50
            sub_14276e260(&var_58)
        case 0x51
            void* rcx_157 = var_58
            char* rax_34 = *(rcx_157 + 0x10)
            char rdi_3 = *rax_34
            *(rcx_157 + 0x10) = &rax_34[1]
            int64_t rbx_7 = sx.q(arg2[1].d)
            int32_t rax_36 = (rbx_7 + 8).d
            arg2[1].d = rax_36
            
            if (rax_36 s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
            
            *(rbx_7 + *arg2) = sub_142763740
            int64_t rbx_8 = sx.q(arg2[1].d)
            int32_t rax_38 = (rbx_8 + 1).d
            arg2[1].d = rax_38
            
            if (rax_38 s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
            
            *(rbx_8 + *arg2) = rdi_3
            char i_4 = *(zx.q(rdi_3) + rbx_1)
            
            if (i_4 != 0)
                uint64_t i_3 = zx.q(i_4)
                uint64_t i_1
                
                do
                    void* rcx_163 = var_58
                    int16_t* rax_41 = *(rcx_163 + 0x10)
                    int16_t rsi_1 = *rax_41
                    *(rcx_163 + 0x10) = &rax_41[1]
                    int64_t rbx_9 = sx.q(arg2[1].d)
                    int32_t rax_43 = (rbx_9 + 2).d
                    arg2[1].d = rax_43
                    
                    if (rax_43 s> *(arg2 + 0xc))
                        sub_1405daba0(arg2)
                    
                    *(rbx_9 + *arg2) = rsi_1
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
        case 0x52
            int64_t rbx_10 = sx.q(arg2[1].d)
            int32_t rax_45 = (rbx_10 + 8).d
            arg2[1].d = rax_45
            
            if (rax_45 s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
            
            *(rbx_10 + *arg2) = sub_1427639a0
            goto label_14276f4bf
        case 0x53
            sub_142764710(&var_58)
        case 0x54
            void* rdx_6 = var_58
            char* rax_12 = *(rdx_6 + 0x10)
            uint64_t rcx_74 = zx.q(*rax_12)
            *(rdx_6 + 0x10) = &rax_12[1]
            
            if (rcx_74.d u<= 7)
                switch (rcx_74)
                    case 0
                        sub_142767ff0(&var_58)
                    case 1
                        sub_1427684b0(&var_58)
                    case 2
                        sub_142768250(&var_58)
                    case 3
                        sub_142768710(&var_58)
                    case 4
                        sub_142768120(&var_58)
                    case 5
                        sub_1427685e0(&var_58)
                    case 6
                        sub_142768380(&var_58)
                    case 7
                        sub_142768840(&var_58)
        case 0x55
            void* rax_47 = var_58
            *(rax_47 + 0x10) += 2
        case 0x57
            rbx_6 = sx.q(arg2[1].d)
            int32_t rax_48 = (rbx_6 + 8).d
            arg2[1].d = rax_48
            
            if (rax_48 s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
            
            rcx_154 = *arg2
            rax_31 = sub_1427638a0
            goto label_14276f44b
        case 0x58
            rbx_6 = sx.q(arg2[1].d)
            int32_t rax_50 = (rbx_6 + 8).d
            arg2[1].d = rax_50
            
            if (rax_50 s> *(arg2 + 0xc))
                sub_1405daba0(arg2)
            
            rcx_154 = *arg2
            rax_31 = sub_142763780
            goto label_14276f44b
    
    if (r14_1 == 0)
        int64_t rbx_14 = sx.q(arg2[1].d)
        int32_t rax_64 = (rbx_14 + 8).d
        arg2[1].d = rax_64
        
        if (rax_64 s> *(arg2 + 0xc))
            sub_1405daba0(arg2)
        
        *(rbx_14 + *arg2) = 0
        break
