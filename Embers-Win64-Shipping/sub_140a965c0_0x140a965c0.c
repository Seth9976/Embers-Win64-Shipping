// 函数: sub_140a965c0
// 地址: 0x140a965c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = arg2
*arg1 = &data_142e64840
void* rbx = &arg1[3]
arg1[2].b = arg5
*(arg1 + 0xc) = arg4
int64_t i_1 = 6
int64_t i

do
    sub_140a964b0(rbx)
    rbx += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
TEB* gsbase
int32_t* rbx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143db9e50 s> *rbx_2)
    _Init_thread_header(&data_143db9e50)
    
    if (data_143db9e50 == 0xffffffff)
        data_143db9e38 = 4
        data_143db9e30 = u"zero"
        data_143db9e3c = sub_140b21160(u"zero", 8, 0)
        data_143db9e40 = i_1
        data_143db9e48 = i_1
        atexit(sub_142cbe020)
        _Init_thread_footer(&data_143db9e50)

if (data_143db9e78 s> *rbx_2)
    _Init_thread_header(&data_143db9e78)
    
    if (data_143db9e78 == 0xffffffff)
        data_143db9e60 = 3
        data_143db9e58 = &data_142e648f0
        data_143db9e64 = sub_140b21160(u"one", 6, 0)
        data_143db9e68 = i_1
        data_143db9e70 = i_1
        atexit(sub_142cbdc50)
        _Init_thread_footer(&data_143db9e78)

if (data_143db9ea0 s> *rbx_2)
    _Init_thread_header(&data_143db9ea0)
    
    if (data_143db9ea0 == 0xffffffff)
        data_143db9e88 = 3
        data_143db9e80 = &data_142e648f8
        data_143db9e8c = sub_140b21160(u"two", 6, 0)
        data_143db9e90 = i_1
        data_143db9e98 = i_1
        atexit(sub_142cbdfc0)
        _Init_thread_footer(&data_143db9ea0)

if (data_143db9ec8 s> *rbx_2)
    _Init_thread_header(&data_143db9ec8)
    
    if (data_143db9ec8 == 0xffffffff)
        data_143db9eb0 = 3
        data_143db9ea8 = &data_142e64900
        data_143db9eb4 = sub_140b21160(u"few", 6, 0)
        data_143db9eb8 = i_1
        data_143db9ec0 = i_1
        atexit(sub_142cbda50)
        _Init_thread_footer(&data_143db9ec8)

if (data_143db9ef0 s> *rbx_2)
    _Init_thread_header(&data_143db9ef0)
    
    if (data_143db9ef0 == 0xffffffff)
        data_143db9ed8 = 4
        data_143db9ed0 = u"many"
        data_143db9edc = sub_140b21160(u"many", 8, 0)
        data_143db9ee0 = i_1
        data_143db9ee8 = i_1
        atexit(sub_142cbdb80)
        _Init_thread_footer(&data_143db9ef0)

if (data_143db9f18 s> *rbx_2)
    _Init_thread_header(&data_143db9f18)
    
    if (data_143db9f18 == 0xffffffff)
        data_143db9f00 = 5
        data_143db9ef8 = u"other"
        data_143db9f04 = sub_140b21160(u"other", 0xa, 0)
        data_143db9f08 = i_1
        data_143db9f10 = i_1
        atexit(sub_142cbdd50)
        _Init_thread_footer(&data_143db9f18)

char* var_68
void* var_60

if (arg3[1].d == *(arg3 + 0x34))
labelid_97:
    sub_140a964b0(&var_68)
else
    void* rcx_2 = arg3[8]
    void* r8 = &arg3[7]
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rbx_3 = *(r8 + (((sx.q(arg3[9].d) - 1) & sx.q(data_143db9e3c)) << 2))
    
    if (rbx_3 == 0xffffffff)
    label_140a96700:
        sub_140a964b0(&var_68)
    else
        wchar16** rcx_3 = *arg3
        int64_t rsi
        
        while (true)
            rsi = sx.q(rbx_3) * 0x38
            int64_t _MaxCount = sx.q(rcx_3[sx.q(rbx_3) * 7 + 1].d)
            
            if (_MaxCount.d == data_143db9e38
                    && wcsncmp(rcx_3[sx.q(rbx_3) * 7], data_143db9e30, _MaxCount) == 0)
                break
            
            rcx_3 = *arg3
            rbx_3 = rcx_3[sx.q(rbx_3) * 7 + 6].d
            
            if (rbx_3 == 0xffffffff)
                goto label_140a96700_2
        
        if (rbx_3 == 0xffffffff)
        label_140a96700_1:
            sub_140a964b0(&var_68)
        else
            void* rcx_44 = *arg3
            void* rcx_45 = rcx_44 + rsi
            
            if (rcx_44 == neg.q(rsi))
            label_140a96700_2:
                sub_140a964b0(&var_68)
            else
                var_68 = *(rcx_45 + 0x20)
                void* rax_65 = *(rcx_45 + 0x28)
                var_60 = rax_65
                
                if (rax_65 != 0)
                    *(rax_65 + 8) += 1

char* rcx_6 = arg1[3]
arg1[3] = var_68
int64_t* rbx_4 = arg1[4]
var_68 = rcx_6
arg1[4] = var_60
int64_t* var_60_1 = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t rax_16 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rax_16 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

char* var_58
void* var_50

if (arg3[1].d == *(arg3 + 0x34))
labelid_79:
    sub_140a964b0(&var_58)
else
    void* rcx_9 = arg3[8]
    void* r8_2 = &arg3[7]
    
    if (rcx_9 != 0)
        r8_2 = rcx_9
    
    int32_t rbx_5 = *(r8_2 + (((sx.q(arg3[9].d) - 1) & sx.q(data_143db9e64)) << 2))
    
    if (rbx_5 == 0xffffffff)
    label_140a967d3:
        sub_140a964b0(&var_58)
    else
        wchar16** rcx_10 = *arg3
        int64_t rsi_1
        
        while (true)
            rsi_1 = sx.q(rbx_5) * 0x38
            int64_t _MaxCount_1 = sx.q(rcx_10[sx.q(rbx_5) * 7 + 1].d)
            
            if (_MaxCount_1.d == data_143db9e60
                    && wcsncmp(rcx_10[sx.q(rbx_5) * 7], data_143db9e58, _MaxCount_1) == 0)
                break
            
            rcx_10 = *arg3
            rbx_5 = rcx_10[sx.q(rbx_5) * 7 + 6].d
            
            if (rbx_5 == 0xffffffff)
                goto label_140a967d3_2
        
        if (rbx_5 == 0xffffffff)
        label_140a967d3_1:
            sub_140a964b0(&var_58)
        else
            void* rcx_46 = *arg3
            void* rcx_47 = rcx_46 + rsi_1
            
            if (rcx_46 == neg.q(rsi_1))
            label_140a967d3_2:
                sub_140a964b0(&var_58)
            else
                var_58 = *(rcx_47 + 0x20)
                void* rax_67 = *(rcx_47 + 0x28)
                var_50 = rax_67
                
                if (rax_67 != 0)
                    *(rax_67 + 8) += 1

char* rcx_13 = arg1[5]
arg1[5] = var_58
int64_t* rbx_6 = arg1[6]
var_58 = rcx_13
arg1[6] = var_50
int64_t* var_50_1 = rbx_6

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t rax_26 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (rax_26 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

char* var_48
void* var_40

if (arg3[1].d == *(arg3 + 0x34))
labelid_5b:
    sub_140a964b0(&var_48)
else
    void* rcx_16 = arg3[8]
    void* r8_4 = &arg3[7]
    
    if (rcx_16 != 0)
        r8_4 = rcx_16
    
    int32_t rbx_7 = *(r8_4 + (((sx.q(arg3[9].d) - 1) & sx.q(data_143db9e8c)) << 2))
    
    if (rbx_7 == 0xffffffff)
    label_140a968a1:
        sub_140a964b0(&var_48)
    else
        wchar16** rcx_17 = *arg3
        int64_t rsi_2
        
        while (true)
            rsi_2 = sx.q(rbx_7) * 0x38
            int64_t _MaxCount_2 = sx.q(rcx_17[sx.q(rbx_7) * 7 + 1].d)
            
            if (_MaxCount_2.d == data_143db9e88
                    && wcsncmp(rcx_17[sx.q(rbx_7) * 7], data_143db9e80, _MaxCount_2) == 0)
                break
            
            rcx_17 = *arg3
            rbx_7 = rcx_17[sx.q(rbx_7) * 7 + 6].d
            
            if (rbx_7 == 0xffffffff)
                goto label_140a968a1_2
        
        if (rbx_7 == 0xffffffff)
        label_140a968a1_1:
            sub_140a964b0(&var_48)
        else
            void* rcx_48 = *arg3
            void* rcx_49 = rcx_48 + rsi_2
            
            if (rcx_48 == neg.q(rsi_2))
            label_140a968a1_2:
                sub_140a964b0(&var_48)
            else
                var_48 = *(rcx_49 + 0x20)
                void* rax_69 = *(rcx_49 + 0x28)
                var_40 = rax_69
                
                if (rax_69 != 0)
                    *(rax_69 + 8) += 1

char* rcx_20 = arg1[7]
arg1[7] = var_48
int64_t* rbx_8 = arg1[8]
var_48 = rcx_20
arg1[8] = var_40
int64_t* var_40_1 = rbx_8

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        (**rbx_8)(rbx_8)
        int32_t rax_36 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (rax_36 == 1)
            (*(*rbx_8 + 8))(rbx_8, 1)

char* var_38
void* var_30

if (arg3[1].d == *(arg3 + 0x34))
labelid_3d:
    sub_140a964b0(&var_38)
else
    void* rcx_23 = arg3[8]
    void* r8_6 = &arg3[7]
    
    if (rcx_23 != 0)
        r8_6 = rcx_23
    
    int32_t rbx_9 = *(r8_6 + (((sx.q(arg3[9].d) - 1) & sx.q(data_143db9eb4)) << 2))
    
    if (rbx_9 == 0xffffffff)
    label_140a96970:
        sub_140a964b0(&var_38)
    else
        wchar16** rcx_24 = *arg3
        int64_t rsi_3
        
        while (true)
            rsi_3 = sx.q(rbx_9) * 0x38
            int64_t _MaxCount_3 = sx.q(rcx_24[sx.q(rbx_9) * 7 + 1].d)
            
            if (_MaxCount_3.d == data_143db9eb0
                    && wcsncmp(rcx_24[sx.q(rbx_9) * 7], data_143db9ea8, _MaxCount_3) == 0)
                break
            
            rcx_24 = *arg3
            rbx_9 = rcx_24[sx.q(rbx_9) * 7 + 6].d
            
            if (rbx_9 == 0xffffffff)
                goto label_140a96970_2
        
        if (rbx_9 == 0xffffffff)
        label_140a96970_1:
            sub_140a964b0(&var_38)
        else
            void* rcx_50 = *arg3
            void* rcx_51 = rcx_50 + rsi_3
            
            if (rcx_50 == neg.q(rsi_3))
            label_140a96970_2:
                sub_140a964b0(&var_38)
            else
                var_38 = *(rcx_51 + 0x20)
                void* rax_71 = *(rcx_51 + 0x28)
                var_30 = rax_71
                
                if (rax_71 != 0)
                    *(rax_71 + 8) += 1

char* rcx_27 = arg1[9]
arg1[9] = var_38
int64_t* rbx_10 = arg1[0xa]
var_38 = rcx_27
arg1[0xa] = var_30
int64_t* var_30_1 = rbx_10

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        (**rbx_10)(rbx_10)
        int32_t rax_46 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (rax_46 == 1)
            (*(*rbx_10 + 8))(rbx_10, 1)

char* var_28
void* var_20

if (arg3[1].d == *(arg3 + 0x34))
labelid_1f:
    sub_140a964b0(&var_28)
else
    void* rcx_30 = arg3[8]
    void* r8_8 = &arg3[7]
    
    if (rcx_30 != 0)
        r8_8 = rcx_30
    
    int32_t rbx_11 = *(r8_8 + (((sx.q(arg3[9].d) - 1) & sx.q(data_143db9edc)) << 2))
    
    if (rbx_11 == 0xffffffff)
    label_140a96a40:
        sub_140a964b0(&var_28)
    else
        int64_t rcx_31 = *arg3
        wchar16** rsi_4
        
        while (true)
            rsi_4 = sx.q(rbx_11) * 0x38
            int64_t _MaxCount_4 = sx.q(*(rsi_4 + rcx_31 + 8))
            
            if (_MaxCount_4.d == data_143db9ed8
                    && wcsncmp(*(rsi_4 + rcx_31), data_143db9ed0, _MaxCount_4) == 0)
                break
            
            rcx_31 = *arg3
            rbx_11 = *(rsi_4 + rcx_31 + 0x30)
            
            if (rbx_11 == 0xffffffff)
                goto label_140a96a40_2
        
        if (rbx_11 == 0xffffffff)
        label_140a96a40_1:
            sub_140a964b0(&var_28)
        else
            void* rcx_52 = *arg3
            void* rcx_53 = rcx_52 + rsi_4
            
            if (rcx_52 == neg.q(rsi_4))
            label_140a96a40_2:
                sub_140a964b0(&var_28)
            else
                var_28 = *(rcx_53 + 0x20)
                void* rax_73 = *(rcx_53 + 0x28)
                var_20 = rax_73
                
                if (rax_73 != 0)
                    *(rax_73 + 8) += 1

char* rcx_34 = arg1[0xb]
arg1[0xb] = var_28
int64_t* rbx_12 = arg1[0xc]
var_28 = rcx_34
arg1[0xc] = var_20
int64_t* var_20_1 = rbx_12

if (rbx_12 != 0)
    rbx_12[1].d -= 1
    
    if (rbx_12[1].d == 1)
        (**rbx_12)(rbx_12)
        int32_t r15_1 = *(rbx_12 + 0xc)
        *(rbx_12 + 0xc) -= 1
        
        if (r15_1 == 1)
            (*(*rbx_12 + 8))(rbx_12, zx.q(r15_1))

char* var_78
void* var_70

if (arg3[1].d == *(arg3 + 0x34))
labelid_1:
    sub_140a964b0(&var_78)
else
    void* rcx_37 = arg3[8]
    void* r8_10 = &arg3[7]
    
    if (rcx_37 != 0)
        r8_10 = rcx_37
    
    int32_t rbx_13 = *(r8_10 + (((sx.q(arg3[9].d) - 1) & sx.q(data_143db9f04)) << 2))
    
    if (rbx_13 == 0xffffffff)
    label_140a96b10:
        sub_140a964b0(&var_78)
    else
        int64_t rcx_38 = *arg3
        wchar16** rsi_5
        
        while (true)
            rsi_5 = sx.q(rbx_13) * 0x38
            int64_t _MaxCount_5 = sx.q(*(rsi_5 + rcx_38 + 8))
            
            if (_MaxCount_5.d == data_143db9f00
                    && wcsncmp(*(rsi_5 + rcx_38), data_143db9ef8, _MaxCount_5) == 0)
                break
            
            rcx_38 = *arg3
            rbx_13 = *(rsi_5 + rcx_38 + 0x30)
            
            if (rbx_13 == 0xffffffff)
                goto label_140a96b10_2
        
        if (rbx_13 == 0xffffffff)
        label_140a96b10_1:
            sub_140a964b0(&var_78)
        else
            void* rcx_54 = *arg3
            void* rcx_55 = rcx_54 + rsi_5
            
            if (rcx_54 == neg.q(rsi_5))
            label_140a96b10_2:
                sub_140a964b0(&var_78)
            else
                var_78 = *(rcx_55 + 0x20)
                void* rax_75 = *(rcx_55 + 0x28)
                var_70 = rax_75
                
                if (rax_75 != 0)
                    *(rax_75 + 8) += 1

char* rcx_41 = arg1[0xd]
arg1[0xd] = var_78
var_78 = rcx_41
int64_t var_70_1 = arg1[0xe]
arg1[0xe] = var_70
sub_1406c61c0(&var_78)
return arg1
