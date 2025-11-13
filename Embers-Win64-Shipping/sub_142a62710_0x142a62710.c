// 函数: sub_142a62710
// 地址: 0x142a62710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1e50)
void var_1e88
int64_t rax_1 = __security_cookie ^ &var_1e88
char* r14 = arg7
char var_1458[0x400]
memset(&var_1458, 0, 0x400)
char var_c58[0x400]
memset(&var_c58, 0, 0x400)
char var_458[0x400]
memset(&var_458, 0, 0x400)
char var_858[0x400]
memset(&var_858, 0, 0x400)
char var_1858[0x4]
memset(&var_1858, 0, 0x400)
uint64_t result = 0
int32_t var_1e38 = 0

if (*arg9 s<= 0)
    sub_142a4d040(arg6, arg5, &var_1458, 0x3ff, &var_1e38)
    uint32_t rax_2
    uint32_t rdx_1
    
    for (int64_t i = 0; i != 8; )
        rdx_1 = zx.d(var_1458[i])
        i += 1
        rax_2 = zx.d(data_14363dff0[7][i])
        
        if (rdx_1 != rax_2)
            break
    
    char rax_3 = var_1458[0]
    
    if (rdx_1 - rax_2 == 0)
        rax_3 = 0
    
    var_1458[0] = rax_3
    sub_142a4cc50(arg6, &var_858, 0x3ff, &var_1e38)
    char* var_1df8
    memset(&var_1df8, 0, 0xc8)
    int64_t var_1d44_1 = 0
    void var_1d28
    memset(&var_1d28, 0, 0xc8)
    int64_t rcx_9 = 0
    int64_t var_1c74_1 = 0
    char var_1058[0x400]
    char i_1
    
    do
        i_1 = var_858[rcx_9]
        var_1058[rcx_9] = i_1
        rcx_9 += 1
    while (i_1 != 0)
    int64_t rcx_10 = 0
    char _Source[0x400]
    char i_2
    
    do
        i_2 = var_858[rcx_10]
        _Source[rcx_10] = i_2
        rcx_10 += 1
    while (i_2 != 0)
    
    if (r14 != 0)
        int128_t* rax_4 = sub_142a63ff0(arg3, &var_1e38)
        *r14 = 1
        
        if (var_1e38 s<= 0)
            void* rax_5 = sub_142a92a50(rax_4, 0, &var_1e38)
            
            if (rax_5 == 0)
            label_142a6294b:
                rax_5.b = 0
            else
                while (true)
                    void* r8_2 = &var_1058 - rax_5
                    uint32_t i_3
                    uint32_t rdx_5
                    
                    do
                        rdx_5 = zx.d(*rax_5)
                        i_3 = zx.d(*(rax_5 + r8_2))
                        
                        if (rdx_5 != i_3)
                            break
                        
                        rax_5 += 1
                    while (i_3 != 0)
                    
                    if (rdx_5 - i_3 == 0)
                        rax_5.b = 1
                        break
                    
                    rax_5 = sub_142a92a50(rax_4, 0, &var_1e38)
                    
                    if (rax_5 == 0)
                        goto label_142a6294b
            
            *r14 = rax_5.b
        
        sub_142a92960(rax_4)
    
    int32_t rax_6 = var_1e38
    
    if (rax_6 s<= 0)
        int32_t var_1e34
        char* var_1e30
        int32_t var_1e28
        int32_t var_1e24
        void* i_31
        void var_1dd0
        int32_t var_1d4c
        char var_1d48
        
        do
            var_1e38 = 0
            char** rax_7 = sub_142a61b10(nullptr, arg3, &var_1058, 0, &var_1e38)
            int32_t rdx_8 = var_1e38
            
            if (rdx_8 + 0x80 u<= 1 && r14 != 0)
                *r14 = 0
            
            r14 = nullptr
            
            if (rdx_8 s> 0)
                *arg9 = rdx_8
            else if (rdx_8 == 0)
                sub_142a625a0(rax_7, arg4, &var_1df8, &var_1e38)
                
                if (var_1e38 == 0)
                    var_1e30 = "default"
                    uint32_t rcx_18 = var_1d4c u>> 0x1c
                    void* rbx_2
                    
                    if (((rcx_18 - 2) & 0xfffffffc) != 0 || rcx_18 == 3)
                        var_1e38 = 0x11
                        rbx_2 = nullptr
                    else
                        var_1e24 = 0
                        int32_t rax_9 = sub_142ac3d30(&var_1dd0, var_1d4c, &var_1e24, &var_1e30)
                        var_1e34 = rax_9
                        char** rax_14
                        char** rdi_1
                        
                        if (rax_9 != 0xffffffff)
                            uint32_t rax_18 = rax_9 u>> 0x1c
                            
                            if (rax_18 == 0)
                                rbx_2 = sub_142ac3aa0(&var_1dd0, rax_9, &var_1e28)
                            else if (rax_18 == 3)
                                rax_14 = sub_142a625a0(&var_1df8, "default", nullptr, &var_1e38)
                                rdi_1 = rax_14
                                
                                if (var_1e38 s> 0)
                                    rbx_2 = nullptr
                                    sub_142a61820(rdi_1, 1)
                                else if (rax_14 != 0)
                                label_142a62c0c:
                                    rbx_2 = sub_142ac3aa0(&rax_14[5], *(rax_14 + 0xac), &var_1e28)
                                    int32_t rax_16 = var_1e38
                                    int32_t rdx_19
                                    rdx_19.b = 1
                                    
                                    if (rbx_2 == 0)
                                        rax_16 = 0x11
                                    
                                    var_1e38 = rax_16
                                    sub_142a61820(rdi_1, rdx_19.b)
                                else
                                label_142a62c33:
                                    var_1e38 = 1
                                    rbx_2 = nullptr
                                    sub_142a61820(rdi_1, 1)
                            else if (rax_18 != 6)
                                var_1e38 = 0x11
                                rbx_2 = nullptr
                            else
                                rbx_2 = sub_142ac3aa0(&var_1dd0, rax_9, &var_1e28)
                        else
                            var_1e30 = "default"
                            
                            if (var_1d48 != 1)
                                var_1e38 = 2
                                rbx_2 = nullptr
                            else
                                void* rax_10 =
                                    sub_142a605d0(&var_1df8, &var_1e30, &i_31, &var_1e34, &var_1e38)
                                
                                if (var_1e38 s> 0)
                                    var_1e38 = 2
                                    rbx_2 = nullptr
                                else
                                    int32_t rdx_13 = var_1e34
                                    uint32_t rcx_22 = rdx_13 u>> 0x1c
                                    
                                    if (rcx_22 == 0)
                                        rbx_2 = sub_142ac3aa0(rax_10, rdx_13, &var_1e28)
                                    else if (rcx_22 == 3)
                                        rax_14 =
                                            sub_142a625a0(&var_1df8, "default", nullptr, &var_1e38)
                                        rdi_1 = rax_14
                                        
                                        if (var_1e38 s<= 0)
                                            if (rax_14 == 0)
                                                goto label_142a62c33
                                            
                                            goto label_142a62c0c
                                        
                                        rbx_2 = nullptr
                                        sub_142a61820(rdi_1, 1)
                                    else if (rcx_22 == 6)
                                        rbx_2 = sub_142ac3aa0(rax_10, rdx_13, &var_1e28)
                                    else
                                        var_1e38 = 0x11
                                        rbx_2 = nullptr
                    
                    if (var_1e38 s<= 0 && var_1e28 != 0)
                        sub_142a8d6e0(rbx_2, &var_c58, std::_WChar_traits<wchar_t>::length(rbx_2))
                        int64_t rcx_25 = 0
                        char i_4
                        
                        do
                            i_4 = var_1058[rcx_25]
                            var_458[rcx_25] = i_4
                            rcx_25 += 1
                        while (i_4 != 0)
                        
                        if (var_1458[0] == i_4)
                            int64_t rcx_26 = 0
                            char i_5
                            
                            do
                                i_5 = var_c58[rcx_26]
                                var_1458[rcx_26] = i_5
                                rcx_26 += 1
                            while (i_5 != 0)
            
            var_1e38 = 0
            
            if (rax_7 != 0)
                char (* rdx_15)[0x400] = &_Source
                char* rcx_27 = *rax_7[3]
                char i_6
                
                do
                    i_6 = *rcx_27
                    rcx_27 = &rcx_27[1]
                    *rdx_15 = i_6
                    rdx_15 = &(*rdx_15)[1]
                while (i_6 != 0)
            
            sub_142a4d5b0(&_Source, &var_1058, 0x400, &var_1e38)
            sub_142a61820(rax_7, 1)
            
            if (var_c58[0] != 0)
                break
            
            if (_Source[0] == 0)
                break
            
            int64_t rcx_30 = 0
            
            while (true)
                char rax_13 = _Source[rcx_30]
                rcx_30 += 1
                
                if (rax_13 != *(rcx_30 + 0x143613e9b))
                    break
                
                if (rcx_30 == 5)
                    goto label_142a62cdb
        while (*arg9 s<= 0)
        
    label_142a62cdb:
        int64_t rcx_38 = 0
        char i_7
        
        do
            i_7 = var_858[rcx_38]
            var_1058[rcx_38] = i_7
            rcx_38 += 1
        while (i_7 != 0)
        int64_t rcx_39 = 0
        char i_8
        
        do
            i_8 = var_858[rcx_39]
            _Source[rcx_39] = i_8
            rcx_39 += 1
        while (i_8 != 0)
        char rbx_3 = var_1858[0]
        int64_t rsi_2 = -1
        void* i_27
        
        while (true)
            var_1e38 = 0
            char** rax_20 = sub_142a61b10(nullptr, arg3, &var_1058, 0, &var_1e38)
            int32_t rcx_40 = var_1e38
            
            if (rcx_40 s> 0)
                *arg9 = rcx_40
            else if (rcx_40 == 0)
                sub_142a625a0(rax_20, arg4, &var_1df8, &var_1e38)
                
                if (var_1e38 == 0)
                    var_1e30 = &var_1458
                    uint32_t rcx_43 = var_1d4c u>> 0x1c
                    i_31 = nullptr
                    
                    if (((rcx_43 - 2) & 0xfffffffc) == 0 && rcx_43 != 3)
                        int32_t rax_22 = sub_142ac3d30(&var_1dd0, var_1d4c, &var_1e28, &var_1e30)
                        var_1e34 = rax_22
                        int32_t rdx_23 = rax_22
                        void* i_29
                        char** var_1e60_1
                        int32_t var_1e58_1
                        char** var_1e50_1
                        int32_t* var_1e48_1
                        void* rcx_47
                        
                        if (rax_22 != 0xffffffff)
                            var_1e48_1 = &var_1e38
                            rcx_47 = &var_1dd0
                            var_1e50_1 = &var_1d28
                            var_1e58_1 = 0
                            var_1e60_1 = &var_1df8
                            i_29 = i_27
                        label_142a62e79:
                            sub_142a60bf0(rcx_47, rdx_23, var_1e30, 0xffffffff, i_29, var_1e60_1, 
                                var_1e58_1, var_1e50_1, var_1e48_1)
                            
                            if (var_1e38 == 0)
                                int64_t rcx_48 = 0
                                char i_9
                                
                                do
                                    i_9 = var_1058[rcx_48]
                                    var_1858[rcx_48] = i_9
                                    rcx_48 += 1
                                while (i_9 != 0)
                                rbx_3 = var_1858[0]
                                
                                if (rbx_3 == 0)
                                    __builtin_strncpy(&var_1858, "root", 4)
                                    rbx_3 = var_1858[0]
                                    char var_1854_1 = 0
                                
                                int64_t rcx_49 = -1
                                
                                do
                                    rcx_49 += 1
                                while (var_1858[rcx_49] != 0)
                                
                                int64_t rax_25 = -1
                                
                                do
                                    rax_25 += 1
                                while (var_458[rax_25] != 0)
                                
                                if (rax_25 u> rcx_49)
                                    void* rax_26 =
                                        sub_142a63dd0(&var_1df8, "default", &var_1e24, &var_1e38)
                                    
                                    if (var_1e38 s<= 0 && var_1e24 != 0)
                                        sub_142a8d6e0(rax_26, &var_c58, 
                                            std::_WChar_traits<wchar_t>::length(rax_26))
                                        int64_t rcx_53 = 0
                                        char i_10
                                        
                                        do
                                            i_10 = var_1858[rcx_53]
                                            var_458[rcx_53] = i_10
                                            rcx_53 += 1
                                        while (i_10 != 0)
                        else
                            var_1e30 = &var_1458
                            
                            if (var_1d48 == 1)
                                void* rax_23 =
                                    sub_142a605d0(&var_1df8, &var_1e30, &i_31, &var_1e34, &var_1e38)
                                
                                if (var_1e38 s<= 0)
                                    rdx_23 = var_1e34
                                    var_1e48_1 = &var_1e38
                                    var_1e50_1 = &var_1d28
                                    var_1e58_1 = 0
                                    var_1e60_1 = &var_1df8
                                    i_29 = i_31
                                    rcx_47 = rax_23
                                    goto label_142a62e79
            
            var_1e38 = 0
            int64_t rcx_54 = 0
            char i_11
            
            do
                i_11 = var_1058[rcx_54]
                _Source[rcx_54] = i_11
                rcx_54 += 1
            while (i_11 != 0)
            sub_142a4d5b0(&_Source, &var_1058, 0x3ff, &var_1e38)
            sub_142a61820(rax_20, 1)
            
            if (rbx_3 != 0)
                break
            
            if (_Source[0] != rbx_3 && *arg9 s<= 0)
                continue
            
            char (* rax_28)[0x400] = &var_1458
            uint32_t i_12
            uint32_t rdx_28
            
            do
                rdx_28 = zx.d(*rax_28)
                i_12 = zx.d((*rax_28)[&var_c58 - &var_1458])
                
                if (rdx_28 != i_12)
                    break
                
                rax_28 = &(*rax_28)[1]
            while (i_12 != 0)
            
            if (rdx_28 - i_12 != 0)
                int64_t rcx_57 = 0
                char i_13
                
                do
                    i_13 = var_c58[rcx_57]
                    var_1458[rcx_57] = i_13
                    rcx_57 += 1
                while (i_13 != 0)
                int64_t rcx_58 = 0
                char i_14
                
                do
                    i_14 = var_858[rcx_58]
                    var_1058[rcx_58] = i_14
                    rcx_58 += 1
                while (i_14 != 0)
                int64_t rcx_59 = 0
                char i_15
                
                do
                    i_15 = var_858[rcx_59]
                    _Source[rcx_59] = i_15
                    rcx_59 += 1
                while (i_15 != 0)
                
                while (true)
                    var_1e38 = 0
                    char** rax_29 = sub_142a61b10(nullptr, arg3, &var_1058, 0, &var_1e38)
                    int32_t rcx_60 = var_1e38
                    
                    if (rcx_60 s> 0)
                        *arg9 = rcx_60
                    else if (rcx_60 == 0)
                        sub_142a625a0(rax_29, arg4, &var_1df8, &var_1e38)
                        
                        if (var_1e38 == 0)
                            var_1e30 = &var_1458
                            uint32_t rcx_63 = var_1d4c u>> 0x1c
                            i_31 = nullptr
                            
                            if (((rcx_63 - 2) & 0xfffffffc) == 0 && rcx_63 != 3)
                                int32_t rax_31 =
                                    sub_142ac3d30(&var_1dd0, var_1d4c, &var_1e28, &var_1e30)
                                var_1e34 = rax_31
                                int32_t rdx_33 = rax_31
                                void* i_30
                                char** var_1e60_2
                                int32_t var_1e58_2
                                char** var_1e50_2
                                int32_t* var_1e48_2
                                void* rcx_67
                                
                                if (rax_31 != 0xffffffff)
                                    var_1e48_2 = &var_1e38
                                    rcx_67 = &var_1dd0
                                    var_1e50_2 = &var_1d28
                                    var_1e58_2 = 0
                                    var_1e60_2 = &var_1df8
                                    i_30 = i_27
                                label_142a631c7:
                                    sub_142a60bf0(rcx_67, rdx_33, var_1e30, 0xffffffff, i_30, 
                                        var_1e60_2, var_1e58_2, var_1e50_2, var_1e48_2)
                                    
                                    if (var_1e38 == 0)
                                        int64_t rcx_68 = 0
                                        char i_16
                                        
                                        do
                                            i_16 = var_1058[rcx_68]
                                            var_1858[rcx_68] = i_16
                                            rcx_68 += 1
                                        while (i_16 != 0)
                                        rbx_3 = var_1858[0]
                                        
                                        if (rbx_3 == 0)
                                            __builtin_strncpy(&var_1858, "root", 4)
                                            rbx_3 = var_1858[0]
                                            char var_1854_2 = 0
                                        
                                        int64_t rcx_69 = -1
                                        
                                        do
                                            rcx_69 += 1
                                        while (var_1858[rcx_69] != 0)
                                        
                                        int64_t rax_34 = -1
                                        
                                        do
                                            rax_34 += 1
                                        while (var_458[rax_34] != 0)
                                        
                                        if (rax_34 u> rcx_69)
                                            void* rax_35 = sub_142a63dd0(&var_1df8, "default", 
                                                &var_1e24, &var_1e38)
                                            
                                            if (var_1e38 s<= 0 && var_1e24 != 0)
                                                sub_142a8d6e0(rax_35, &var_c58, 
                                                    std::_WChar_traits<wchar_t>::length(rax_35))
                                                int64_t rcx_73 = 0
                                                char i_17
                                                
                                                do
                                                    i_17 = var_1858[rcx_73]
                                                    var_458[rcx_73] = i_17
                                                    rcx_73 += 1
                                                while (i_17 != 0)
                                else
                                    var_1e30 = &var_1458
                                    
                                    if (var_1d48 == 1)
                                        void* rax_32 = sub_142a605d0(&var_1df8, &var_1e30, &i_31, 
                                            &var_1e34, &var_1e38)
                                        
                                        if (var_1e38 s<= 0)
                                            rdx_33 = var_1e34
                                            var_1e48_2 = &var_1e38
                                            var_1e50_2 = &var_1d28
                                            var_1e58_2 = 0
                                            var_1e60_2 = &var_1df8
                                            i_30 = i_31
                                            rcx_67 = rax_32
                                            goto label_142a631c7
                    
                    var_1e38 = 0
                    int64_t rcx_74 = 0
                    char i_18
                    
                    do
                        i_18 = var_1058[rcx_74]
                        _Source[rcx_74] = i_18
                        rcx_74 += 1
                    while (i_18 != 0)
                    sub_142a4d5b0(&_Source, &var_1058, 0x3ff, &var_1e38)
                    sub_142a61820(rax_29, 1)
                    
                    if (rbx_3 != 0)
                        break
                    
                    if (_Source[0] == rbx_3)
                        break
                    
                    if (*arg9 s> 0)
                        goto label_142a63550
            
            break
        
        if (*arg9 s<= 0)
            if (rbx_3 == 0)
                *arg9 = 2
            else if (arg8 != 0)
                int64_t rax_37 = -1
                
                do
                    rax_37 += 1
                while (var_1858[rax_37] != 0)
                
                int64_t rcx_77 = -1
                
                do
                    rcx_77 += 1
                while (var_458[rcx_77] != 0)
                
                if (rcx_77 u<= rax_37)
                    char (* rax_38)[0x400] = &var_1458
                    uint32_t i_19
                    uint32_t rdx_38
                    
                    do
                        rdx_38 = zx.d(*rax_38)
                        i_19 = zx.d((*rax_38)[&var_c58 - &var_1458])
                        
                        if (rdx_38 != i_19)
                            break
                        
                        rax_38 = &(*rax_38)[1]
                    while (i_19 != 0)
                    
                    char rax_39 = var_1458[0]
                    
                    if (rdx_38 - i_19 == 0)
                        rax_39 = 0
                    
                    var_1458[0] = rax_39
            
            int64_t rcx_78 = 0
            char i_20
            
            do
                i_20 = var_1858[rcx_78]
                _Source[rcx_78] = i_20
                rcx_78 += 1
            while (i_20 != 0)
            
            void var_1c59
            
            if (var_1458[0] != i_20)
                void* rcx_79 = &var_1c59
                bool cond:9_1
                
                do
                    cond:9_1 = *(rcx_79 + 1) != 0
                    rcx_79 += 1
                while (cond:9_1)
                *rcx_79 = 0x40
                void* rcx_80 = &var_1c59
                bool cond:11_1
                
                do
                    cond:11_1 = *(rcx_80 + 1) != 0
                    rcx_80 += 1
                while (cond:11_1)
                int64_t rdx_40 = 0
                char i_21
                
                do
                    i_21 = arg5[rdx_40]
                    *(rcx_80 + rdx_40) = i_21
                    rdx_40 += 1
                while (i_21 != 0)
                void* rcx_81 = &var_1c59
                bool cond:16_1
                
                do
                    cond:16_1 = *(rcx_81 + 1) != 0
                    rcx_81 += 1
                while (cond:16_1)
                *rcx_81 = 0x3d
                void* rcx_82 = &var_1c59
                bool cond:18_1
                
                do
                    cond:18_1 = *(rcx_82 + 1) != 0
                    rcx_82 += 1
                while (cond:18_1)
                int64_t rdx_41 = 0
                char i_22
                
                do
                    i_22 = var_1458[rdx_41]
                    *(rcx_82 + rdx_41) = i_22
                    rdx_41 += 1
                while (i_22 != 0)
            else if (arg8 == 0)
                void* rcx_83 = &var_1c59
                bool cond:10_1
                
                do
                    cond:10_1 = *(rcx_83 + 1) != 0
                    rcx_83 += 1
                while (cond:10_1)
                *rcx_83 = 0x40
                void* rcx_84 = &var_1c59
                bool cond:14_1
                
                do
                    cond:14_1 = *(rcx_84 + 1) != 0
                    rcx_84 += 1
                while (cond:14_1)
                int64_t rdx_42 = 0
                char i_23
                
                do
                    i_23 = arg5[rdx_42]
                    *(rcx_84 + rdx_42) = i_23
                    rdx_42 += 1
                while (i_23 != 0)
                void* rcx_85 = &var_1c59
                bool cond:17_1
                
                do
                    cond:17_1 = *(rcx_85 + 1) != 0
                    rcx_85 += 1
                while (cond:17_1)
                *rcx_85 = 0x3d
                void* rcx_86 = &var_1c59
                bool cond:19_1
                
                do
                    cond:19_1 = *(rcx_86 + 1) != 0
                    rcx_86 += 1
                while (cond:19_1)
                int64_t rdx_43 = 0
                char i_24
                
                do
                    i_24 = var_c58[rdx_43]
                    *(rcx_86 + rdx_43) = i_24
                    rdx_43 += 1
                while (i_24 != 0)
        
    label_142a63550:
        void* i_25 = i_27
        
        if (i_25 != 0)
            sub_142a615c0()
            sub_142a860a0(&data_144015690)
            
            for (; i_25 != 0; i_25 = *(i_25 + 0x10))
                *(i_25 + 0x6c) -= 1
            
            sub_142a615c0()
            sub_142a860d0(&data_144015690)
        
        int64_t var_1de8
        
        if (var_1de8 != 0)
            sub_142a7dcd0(var_1de8)
        
        int64_t var_1dd8
        void var_1d90
        
        if (var_1dd8 != 0 && var_1dd8 != &var_1d90)
            sub_142a7dcd0(var_1dd8)
        
        int64_t var_1dd8_1 = 0
        int32_t var_1d50_1 = 0
        
        if (var_1d44_1.d == 0x12c9b17 && var_1d44_1:4.d == 0x12bb38b)
            sub_142a7dcd0(&var_1df8)
        
        void* i_28
        void* i_26 = i_28
        
        if (i_26 != 0)
            sub_142a615c0()
            sub_142a860a0(&data_144015690)
            
            for (; i_26 != 0; i_26 = *(i_26 + 0x10))
                *(i_26 + 0x6c) -= 1
            
            sub_142a615c0()
            sub_142a860d0(&data_144015690)
        
        int64_t var_1d18
        
        if (var_1d18 != 0)
            sub_142a7dcd0(var_1d18)
        
        int64_t var_1d08
        void var_1cc0
        
        if (var_1d08 != 0 && var_1d08 != &var_1cc0)
            sub_142a7dcd0(var_1d08)
        
        int64_t var_1d08_1 = 0
        int32_t var_1c80_1 = 0
        
        if (var_1c74_1.d == 0x12c9b17 && var_1c74_1:4.d == 0x12bb38b)
            sub_142a7dcd0(&var_1d28)
        
        do
            rsi_2 += 1
        while (_Source[rsi_2] != 0)
        
        char* _Destination
        int32_t rdi_4
        
        if (*arg9 s> 0)
            _Destination = arg1
            rsi_2 = 0
            rdi_4 = arg2
            *_Destination = 0
        else
            rdi_4 = arg2
            int32_t rax_40 = sub_142a92b70(rsi_2.d, rdi_4)
            _Destination = arg1
            
            if (rax_40 s> 0)
                strncpy(_Destination, &_Source, sx.q(rax_40))
            
            if (rsi_2.d == 0)
                *arg9 = 2
        
        result = sub_142a8c3f0(_Destination, rdi_4, rsi_2.d, arg9)
    else
        *arg9 = rax_6
        result = 0

__security_check_cookie(rax_1 ^ &var_1e88)
return result
